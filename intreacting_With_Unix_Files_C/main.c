#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main(int argc, char** argv) {
    DIR* current_directory_ptr; /* DIR is a type from dirent.h */
    struct dirent* next_entry_ptr;/* struct dirent is from dirent.h */

    char dir_path[100];
    printf("Please enter directory name: ");
    scanf("%s", dir_path);

    current_directory_ptr = opendir(dir_path);
    next_entry_ptr = readdir(current_directory_ptr);

    while (next_entry_ptr != NULL){
        printf("File has inode number %d and is called %s\n",
               (int)next_entry_ptr -> d_ino, next_entry_ptr -> d_name);
        next_entry_ptr = readdir(current_directory_ptr);
    }
    closedir(current_directory_ptr);

    char file_name[100];
    printf("Please input the file you would like to access: ");
    scanf("%s", file_name);
    strcat(dir_path, "/");
    strcat(dir_path,file_name);

    struct stat buff;
    stat(dir_path, &buff);

    printf("protection: %d\nID of device: %d\ninode num: %d\n", buff.st_mode, (int)buff.st_dev, (int)buff.st_ino);

    return (EXIT_SUCCESS);
}
