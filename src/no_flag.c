/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"

int no_flags(char *direc)
{
    struct stat sfile;
    stat(direc, &sfile);
    DIR * rep = opendir (direc);
    if (rep == NULL)
        exit (84);
    struct dirent *entry;
    char *valeurs[256] = {0};
    int j = 0;

    while ((entry = readdir (rep)) != NULL) {
        if (entry->d_name[0] != '.') {
            valeurs[j] = entry->d_name;
            j++;
        }
    }
    sort_alphabet(valeurs, j);
    for (int i = 0; i < j; i++)
        my_printf("%s\n", valeurs[i]);
    closedir(rep);
    return 0;
}
