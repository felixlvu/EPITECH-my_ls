/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"

int flag_a(char *direc)
{
    DIR * rep = opendir (direc);
    if (rep == NULL) {
        my_printf("Permission denied\n");
        exit (84);
    }
    struct dirent *entry;
    char *valeurs[256] = {0};
    int j = 0;

    while ((entry = readdir (rep)) != NULL) {
        valeurs[j] = entry->d_name;
        j++;
    }
    sort_alphabet(valeurs, j);
    for (int i = 0; i < j; i++) {
        my_printf("%s\n", valeurs[i]);
    }
    closedir(rep);
    return 0;
}
