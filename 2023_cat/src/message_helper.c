/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 16:02 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: write message helper
 */

#include <unistd.h>
#include "../include/function.h"

void message_helper(char **av)
{
    char *str;

    str = " [OPTION]... [FILE]..."
        "Concatenate FILE(s) to standard output.\n"
        "\n"
        "With no FILE, or when FILE is -, read standard input.\n"
        "\n"
        "-E, --show-ends          display $ at end of each line\n"
        "-T, --show-tabs          display TAB characters as ^I\n\0";

    write(1, "Usage: ", 7);
    write(1, av[0], stu_strlen(av[0]));
    write(1, str, stu_strlen(str));
}
