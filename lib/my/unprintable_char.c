/*
** EPITECH PROJECT, 2022
** miniprintf
** File description:
** miniprintf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_put_nbr(int nb);

int decimal_to_octal(unsigned int nb)
{
    int remainder = 0;
    unsigned int oct = 0;
    int count = 1;
    int i = 0;

    while (nb != 0) {
        remainder = nb % 8;
        oct += remainder * count;
        count *= 10;
        nb /= 8;
        i++;
    }
    my_put_nbr(oct);
    return (i);
}

int non_printable_characters(char *str, int i)
{
    int count = 0;
    int nb = 0;
    my_putchar(92);
    count ++;
    nb = str[i];
    if (str[i] >= 0 && str[i] <= 7) {
        my_putchar(48);
        my_putchar(48);
        my_putchar(nb + 48);
        count += 3;
    } else {
        my_putchar(48);
        decimal_to_octal(nb);
        count += my_numlen(nb);
    }
    return (count);
}

int unprintable_char(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            count += non_printable_characters(str, i);
        } else {
            my_putchar(str[i]);
        }
    }
    count += my_strlen(str);
    return (count - 1);
}

int flag_s_up(va_list list)
{
    return (unprintable_char(va_arg(list, char *)));
}
