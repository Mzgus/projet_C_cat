/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-04 - 15:00 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: cat
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "../include/function.h"

int sta_cat()
{
    char *buffer;
    int size_read;
    char *error;

    buffer = malloc(sizeof (char) * 100);
    size_read = 1;
    error = strerror(errno);
    while (size_read > 0) {
        size_read = read(0, buffer, 100);
        if (size_read == -1) {
            write(1, error, stu_strlen(error));
            return -1;
        }
        write(1, buffer, size_read);
    }
    free(buffer);
    return 0;
}
