#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
ssize_t _getline(char **lineptr, size_t *n, int fd);
#define MAX_COMMAND_LEN 100
#define INITIAL_BUFFER_SIZE 120

#endif /*MAIN_HEADER*/
