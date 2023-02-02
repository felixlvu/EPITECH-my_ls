/*
** EPITECH PROJECT, 2022
** Jacques Sapin
** File description:
** Writing another type of my_put_float
*/

#include "my.h"

int my_numlen(int nb);
int my_put_nbr(int nb);

int my_put_decim(double nb, int precision)
{
    int round = 0;
    char str[9];
    signed long int temp = 0;
    int i = 0;
    nb += 0.0000000001;

    for ( ; i != precision; i++) {
        round = nb * 100;
        round = round % 10;
        if (round >= 5 && i == precision - 1)
            nb += 0.1;
        nb *= 10;
        temp = ( signed long int ) nb % 10;
        nb -= ( signed long int ) nb;
        str[i] = temp + '0';
    }
    str[i] = '\0';
    my_putstr(str);
    return (i);
}

int my_put_float(double nb, int precision)
{
    int count = 1;
    signed long int int_part;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
        count++;
    }
    int_part = ( signed long int ) nb;
    my_put_nbr(int_part);
    my_putchar('.');
    count += my_numlen(int_part);
    count += my_put_decim(nb, precision);
    return (count);
}

int flag_f(va_list list)
{
    return (my_put_float(va_arg(list, double), 6));
}
