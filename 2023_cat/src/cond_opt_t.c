/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-11 - 15:27 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: condition for opt t
 */

#include "../include/function.h"

int cond_opt_t(char **av, int ac)
{
    int count;

    count = 1;
    while (count < ac) {
        if (has_opt(av[count], 'T')) {
            count = 1;
            while (count < ac) {
                if (!stu_strcmp(av[count], "-")) {
                    sta_cat();
                }
                if (av[count][0] != '-') {
                    opt(av[0], av[count], 'T');
                }
                count += 1;
            }
            return 0;
        }
        count += 1;
    }
    return 1;
}
