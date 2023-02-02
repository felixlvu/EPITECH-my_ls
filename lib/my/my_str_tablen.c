/*
** EPITECH PROJECT, 2022
** libpool
** File description:
** libpool
*/

#include <stddef.h>

int my_str_tablen(char **tab)
{
    int length = 0;
    while (tab[length] != NULL) {
        length++;
    }
    return length;
}
