#ifndef ULS_H
#define ULS_H

#define LS "uls: "
#define FLAGS "-@ACGRSTaehlrtu"
#define NOFILE ": No such file or directory"
#define USAGE1 "uls: illegal option -- "
#define USAGE2 "\nusage: uls [-@ACGRSTaehlrtu] [file ...]\n"

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <malloc/malloc.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>//for opendir, readdir, closedir
#include <sys/types.h>//for stat, lstat
#include <sys/stat.h>//for stat, lstat
#include <time.h>
#include <sys/ioctl.h>
#include "../libmx/inc/libmx.h"

//declaration for dir & file as arguments
/* typedef struct s_file {
    char *f_mode;//file mode
    int n_link;//number of links
    char o_name;//owner name
    char g_name;//group name
    int size;//number of bytes in the file
    char *month;//abbreviated month
    int day;//day-of-month file was last modified
    int hour;//hour file last modified
    int minute;//minute file last modified
    char *name;//pathname
} t_file; */

#endif
