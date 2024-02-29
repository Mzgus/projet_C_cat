/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-07 - 11:08 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: option e
 */


#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "../include/function.h"

int opt(char *av, char *file, char opt)
{
    char *buffer;
    int size_read;
    int fd;

    buffer = malloc(sizeof (char) * 100);
    size_read = 1;
    fd = open(file, O_RDONLY);
    if (fd == -1) {
        message_error(av, file);
        return 0;
    }
    while (size_read > 0) {
        size_read = read(fd, buffer, 99);
        buffer[size_read] = '\0';
        if (size_read == -1) {
            message_error(av, file);
            return 0;
        }
        opt_read(buffer, opt);
    }
    free(buffer);
    return 0;
}
