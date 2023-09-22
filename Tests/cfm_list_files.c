#include "../include/CFileManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {

  // if arg count is less than 2 or directory path is not passed
  if (!(argc > 1)) {
    printf("Usage: cfm_list_files <directory_path>\n");
    return -1;
  }
  int max_depth = 0;
  FILE *file;
  file = fopen("hello.txt", "w");

  // to estimate execution time in ms
  clock_t start_time, end_time;
  double elapsed_time;

  // to store number of files and folders
  int node_count = 0;

  // get start time
  start_time = clock();

  cfm_list_files(argv[1], max_depth, &node_count, file);

  // get end time
  end_time = clock();

  // calculate milli seconds
  elapsed_time = ((double)(end_time - start_time) / CLOCKS_PER_SEC) * 1000;

  // print to stdout
  printf("found %d files and took %.4f seconds\n", node_count, elapsed_time);
  fclose(file);
  return 0;
}