// Author: Cherala Saiteja
// Date: 22-9-23

#ifndef CFILEMANAGER_H
#define CFILEMANAGER_H

// Flat structure to store all file names
struct FileInfo{
    char name[1024];
    int isFolder;
};

// lists all files from root folder and all subfolders
void ListFiles();

// retrieves all files from root folder and all subfolders
void ExploreDirectory();

// search for file[s] in retrieved files
void SearchList();

// sorts retrieved files
void SortList();

#endif