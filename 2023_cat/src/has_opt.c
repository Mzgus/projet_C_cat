/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 15:58 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: has opt
 */


int has_opt(char *av, char str)
{
    int count2;

    count2 = 0;
    if (av[0] == '-') {
        while (av[count2] != '\0') {
            if (str == av[count2]) {
                return 1;
            }
            count2 = count2 + 1;
        }
        count2 = 0;
    }
    return 0;
}
