/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-07 - 17:01 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: stu strcmp
 */

int stu_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1;
        }
        i = i + 1;
    }
    return 0;
}
