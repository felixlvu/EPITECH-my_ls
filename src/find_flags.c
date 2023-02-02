/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"
#include <sys/stat.h>


int print_flag_next(char **arv, char *direc, int flag, int count)
{
    if (arv[flag][1] == 't') {
        return 0;
    }
    if (arv[flag][1] == 'r') {
        return 0;
    }
    if (arv[flag][1] == 'R') {
        return 0;
    }
    return 0;
}

int print_flag(char **arv, char *direc, int flag, int count)
{
    if (flag == 0) {
        no_flags(direc);
    }
    if (arv[flag][1] == 'a') {
        flag_a(direc);
    }
    if (arv[flag][1] == 'l') {
        flag_l(arv, direc);
    }
    if (arv[flag][1] == 'd') {
        flag_d(direc);
    }
    print_flag_next(arv, direc, flag, count);
    return 0;
}

void print_multi_simple(char **arv, char *direc, int flag, int count)
{
    if (count > 1) {
        my_printf("%s", direc);
        my_printf(":");
        my_printf("\n");
    }
    print_flag(arv, direc, flag, count);
    if (count > 1) {
        my_printf("\n");
    }
}

int check_isdir(char **arv, char *direc, int flag, int count)
{
    struct stat sfile;
    stat(direc, &sfile);

    if (stat(direc, &sfile) == -1) {
        my_printf("%s", "ls: cannot access '");
        my_printf("%s", direc);
        my_printf("%s\n", "': No such file or directory");
        exit (84);
    }
    if (S_ISDIR(sfile.st_mode)) {
        print_multi_simple(arv, direc, flag, count);
    } else {
        my_printf("%s\n", direc);
    }
    return (0);
}
