/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 14:51 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: message error
 */

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "../include/function.h"

void message_error(char *av, char *file)
{
    char *error;

    error = strerror(errno);
    write(1, av, stu_strlen(av));
    write(1, ": ", 2);
    write(1, file, stu_strlen(file));
    write(1, ": ", 2);
    write(1, error, stu_strlen(error));
    write(1, "\n", 1);
}
