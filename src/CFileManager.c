#include <CFileManager.h>
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

void cfm_list_files(const char *directory_path, int max_depth, int *node_count,
                    FILE *out_stream) {

  // check if stream is null and set to stdout
  if (out_stream == NULL) {
    out_stream = stdout;
  }

  //  keeps tracks of depth for better display mechanism
  static int current_depth;

  // to store current path
  char full_path[CFM_PATH_LENGTH];

  struct dirent *entry;

  if (current_depth >= max_depth && max_depth != 0) {
    return;
  }

  // open current directory
  DIR *current_directory = opendir(directory_path);

  // if unable to open
  if (!current_directory) {
    fprintf(out_stream, "Error opening directory %s: %s\n", full_path,
            strerror(errno));
    return;
  }


  while ((entry = readdir(current_directory))) {
    // if entries are . & .. skip
    if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
      continue;
    }

    // add entry to full path
    snprintf(full_path, sizeof(full_path), "%s/%s", directory_path,
             entry->d_name);

    //  if null is passed to node_count it throws segfault
    if (node_count != NULL) {
      (*node_count)++;
    }

    // if entry is folder
    // print to stdout
    // update current_depth
    if (entry->d_type == DT_DIR) {
      fprintf(out_stream, "%s\n", full_path);

      // depth incremented
      current_depth += 1;
      cfm_list_files(full_path, max_depth, node_count, out_stream);

      // depth decremented on return
      current_depth -= 1;
    }

    // if entry is file
    // print to stdout
    else if (entry->d_type == DT_REG) {

      // print tabs for depth[s]
      for (int i = 0; i < current_depth; i++) {
        fprintf(out_stream, "    ");
      }
      fprintf(out_stream, "%s\n", full_path);
    }
  }

  closedir(current_directory);
}