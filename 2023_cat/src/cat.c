/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 14:53 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: cat function
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/function.h"


int cat(int ac, char **av)
{
    int count;

    count = 1;
    if (ac == 1) {
        sta_cat();
    }
    if (cond_opt_e(av, ac) == 0) {
        return 0;
    }
    if (cond_opt_t(av, ac) == 0) {
        return 0;
    }
    while (count < ac) {
        if (has_opt(av[count], 'h')) {
            message_helper(av);
            return 0;
        }
        count += 1;
    }
    if (cond_file_cat(av, ac) == 0) {
        return 0;
    }
    return 0;
}
