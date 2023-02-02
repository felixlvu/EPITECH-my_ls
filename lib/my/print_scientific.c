/*
** EPITECH PROJECT, 2022
** flags
** File description:
** flags
*/

#include "my.h"

int my_put_nbr(int nb);

int print_argument_next(double argument, int size)
{
    int i = 0;

    if (argument > -1 && argument <= 0) {
        argument = argument * 10;
        my_put_float(argument, size);
    }
    if (argument > 10 || argument < -10) {
        while (argument > 10 || argument < -10){
        argument = argument / 10;
        i++;
        }
        my_put_float(argument, size);
    }
    return (i);
}

int print_argument(double argument, int size)
{
    if ((argument > 1 && argument < 10)) {
        my_put_float(argument, size);
    }
    if (argument > -10 && argument < -1) {
        my_put_float(argument, size);
    }
    if (argument < 1 && argument >= 0) {
        argument = argument * 10;
        my_put_float(argument, size);
    }
    return (print_argument_next(argument, size));
}

int print_scientific_next(double argument, int type)
{
    if (type == 1) {
        my_putchar('e');
    }
    if (type == 2) {
        my_putchar('E');
    }
    if (argument < 1 && argument > 0) {
        my_putchar('-');
    }
    if (argument < -1 || argument >= 1) {
        my_putchar('+');
    }
    return (0);
}

int print_scientific(double argument, int type, int size)
{
    int count = size + 6;
    int a = print_argument(argument, size);
    print_scientific_next(argument, type);

    if (a < 10) {
        my_putchar('0');
    }
    if (argument < 1 && argument > 0) {
        my_put_nbr(a);
    }
    if (argument < -1 || argument >= 1) {
        my_put_nbr(a);
    }
    my_putchar('\n');
    return (count);
}
