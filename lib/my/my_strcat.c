/*
** EPITECH PROJECT, 2022
** poollib
** File description:
** poollib
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char *src)
{
    int len;
    int i;

    len = my_strlen(dest);
    i = 0;
    dest[len] = '/';
    len++;
    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
