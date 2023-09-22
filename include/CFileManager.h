// Author: Cherala Saiteja
// Date: 22-9-23

#ifndef CFILEMANAGER_H
#define CFILEMANAGER_H

// path length
#include <stdio.h>
#define CFM_PATH_LENGTH 1024

// length of file/folder name in cfm_node struct
#define CFM_NODE_NAME_LENGTH 256

// min count of subdirectory files/folders a cfm_node can have
#define CFM_MIN_NODES_COUNT 256

// Flat structure to store all file names
struct cfm_node {
  char name[CFM_NODE_NAME_LENGTH];
  int is_folder;
  struct cfm_node *nodes;
  int count, head, tail;
};

/*
 *   @brief lists and prints all files from root folder and all subfolders to
 *  stdout
 *
 *   @param directory_path directory from where the search should be started
 *   @param max_depth maximum depth a consider when searching
 *   @param node_count address of integer to store number of files/folders found
 *   @param out_stream can be used to print to files if needed. when passed null
 * stdout considered
 */
void cfm_list_files(const char *directory_path, int max_depth, int *node_count,
                    FILE *out_stream);

//
// To be Implemented
//

// // retrieves all files from root folder and all subfolders
// void cfm_explore_directory();

// // search for file[s] in retrieved files
// void cfm_search_list();

// // sorts retrieved files
// void cfm_sort_list();

#endif