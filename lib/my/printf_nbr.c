/*
** EPITECH PROJECT, 2022
** printf
** File description:
** printf nbr
*/

#include "my.h"
#include <unistd.h>

int print_case_min(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('8');
        return (0);
    }
    return (1);
}

int my_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        if (print_case_min(nb) == 0)
            return (11);
        nb *= -1;
        my_putchar('-');
    }
    if (nb >= 10) {
        count = my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count += 1;
    return ((nb < 0) ? (count + 1) : count);
}

int flag_di(va_list list)
{
    return (my_put_nbr(va_arg(list, int)));
}
