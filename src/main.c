/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"

int check_flag(int arc, char **arv)
{
    int i = 1;
    int flag = 0;

    while (i != arc) {
        if (arv[i][0] == '-')
            flag = i;
        i++;
    }
    return (flag);
}

int cont_direc(int arc, char **arv)
{
    struct stat sfile;
    int i = 1;
    int count = 0;

    while (i != arc) {
        stat(arv[i], &sfile);
        if (S_ISDIR(sfile.st_mode) && arv[i][0] != '-')
            count++;
    i++;
    }
    return (count);
}

int main(int arc, char **arv)
{
    int i = 1;
    int j = 0;
    char *direc = ".";
    int flag = check_flag(arc, arv);
    int count = cont_direc(arc, arv);

    while (i != arc) {
        if (arv[i][0] != '-') {
            direc = arv[i];
            check_isdir(arv, direc, flag, count);
            j++;
        }
        i++;
    }
    if (count == 0 && j == 0)
        check_isdir(arv, direc, flag, count);
    return 0;
}
