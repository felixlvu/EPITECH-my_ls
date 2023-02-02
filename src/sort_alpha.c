/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"
void sort_alphabet_next(char *tab[], int len, char *temp, int i)
{
    for (int j = 0; j < len; j++) {
        if (my_strcmp(tab[i], tab[j]) < 0) {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
    }
}

void sort_alphabet(char *tab[], int len)
{
    char *temp;
    for (int i = 0; i < len; i++) {
        sort_alphabet_next(tab, len, temp, i);
    }
}

char **sort_alphabet_main(char *direc)
{
    DIR * rep = opendir (direc);
    struct dirent *entry;
    char *valeurs[256] = {0};
    int j = 0;

    while ((entry = readdir (rep)) != NULL) {
        valeurs[j] = entry->d_name;
        j++;
    }
    sort_alphabet(valeurs, j);
    closedir(rep);
    return (0);
}
