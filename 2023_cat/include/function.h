/*
 * E89 Pedagogical & Technical Lab
 * project:     cat
 * created on:  2023-12-11 - 13:25 +0100
 * 1st author:  ilan.trigueiro-legrand - ilan.trigueiro-legrand
 * description: include fonction
 */

#ifndef FUNCTION_
#define FUNCTION_


int file_cat(char *av, char *file);
unsigned int stu_strlen(const char *str);
int sta_cat();
void message_error(char *av, char *file);
int has_opt(char *av, char str);
void message_helper(char **av);
int stu_strcmp(const char *s1, const char *s2);
int opt(char *av, char *file, char opt);
int cat(int ac, char **av);
void opt_read(char *buffer, char opt);
int cond_opt_e(char **av, int ac);
int cond_opt_t(char **av, int ac);
int cond_file_cat(char **av, int ac);

#endif
