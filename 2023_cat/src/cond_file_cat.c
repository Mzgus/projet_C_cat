/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-11 - 16:54 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: condition for file cat
 */

#include "../include/function.h"

int cond_file_cat(char **av, int ac)
{
    int count;

    count = 1;
    while (count < ac) {
        if (!stu_strcmp(av[count], "-")) {
            sta_cat();
        }
        if (av[count][0] != '-') {
            file_cat(av[0], av[count]);
        }
        count += 1;
    }
    return 0;
}
