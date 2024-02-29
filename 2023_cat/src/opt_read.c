/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-11 - 12:26 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: opt reader
 */

#include <unistd.h>
#include <stdio.h>

void opt_read(char *buffer, char opt)
{
    int count;

    count = 0;
    if (opt == 'E') {
        while (buffer[count] != '\0') {
            if (buffer[count] == '\n') {
                write(1, buffer, count);
                write(1, "$\n", 2);
                buffer += count + 1;
                count = 0;
            }
            count += 1;
        }
    } else {
        while (buffer[count] != '\0') {
            if (buffer[count] == '\t') {
                write(1, buffer, count);
                write(1, "^I", 2);
                buffer += count + 1;
                count = 0;
            }
            count += 1;
        }
    }
    write(1, buffer, count);
}

