#ifndef TYPES_H
#define TYPES_H

#include <sys/types.h>

struct File_entry {
    char* file_name;
    int size;
    time_t mtime;
    mode_t st_mode;
    char* object_hash;
    char hash[41]; //SHA-1 hash of file (40 bytes)
};

#endif
