/*
** EPITECH PROJECT, 2022
** printf
** File description:
** nbr_spec
*/

#include "my.h"
#include <unistd.h>

int my_put_nbr(int nb);

int my_unsigned_put_nbr(unsigned int nb)
{
    int count = 0;

    if (nb >= 10) {
        count = my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count += 1;
    return (count);
}

int my_put_nbrsign(int nb)
{
    int count = 0;

    if (nb < 0) {
        if (print_case_min(nb) == 0)
            return (11);
        nb *= -1;
        my_putchar('-');
    } else {
        write(1, "+", 1);
    }
    if (nb >= 10) {
        count = my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count += 1;
    return ((nb < 0) ? (count + 1) : count);
}

int flag_u(va_list list)
{
    return (my_unsigned_put_nbr(va_arg(list, unsigned int)));
}

int flag_plus(va_list list)
{
    return (my_put_nbrsign(va_arg(list, int)));
}
