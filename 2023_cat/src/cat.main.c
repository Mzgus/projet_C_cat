/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 14:48 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: cat main
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/function.h"

int main(int ac, char **av)
{
    cat(ac, av);
}
