#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
ssize_t _getline(char **lineptr, size_t *n, int fd);

#endif /*MAIN_HEADER*/
