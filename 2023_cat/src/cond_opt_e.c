/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-11 - 14:19 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: condition for option
 */

#include "../include/function.h"

int cond_opt_e(char **av, int ac)
{
    int count;

    count = 1;
    while (count < ac) {
        if (has_opt(av[count], 'E')) {
            count = 1;
            while (count < ac) {
                if (!stu_strcmp(av[count], "-")) {
                    sta_cat();
                }
                if (av[count][0] != '-') {
                    opt(av[0], av[count], 'E');
                }
                count += 1;
            }
            return 0;
        }
        count += 1;
    }
    return 1;
}
