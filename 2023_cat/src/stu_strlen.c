/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-05 - 14:50 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: str len
 */

unsigned int stu_strlen(const char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0') {
        count = count + 1;
    }
    return count;
}
