/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"

int flag_d(char *direc)
{
    DIR * rep = opendir (direc);
    if (rep == NULL) {
        my_printf("my_ls: cannot open directory '");
        my_printf("%s", direc);
        my_printf("': Permission denied\n");
        exit (84);
    }
    struct dirent *entry;

    if (direc == ".") {
        my_printf("%s", ".");
    } else {
        my_printf("%s", direc);
    }

    my_printf("\n");
    closedir(rep);
    return 0;
}
