/*
** EPITECH PROJECT, 2022
** printf
** File description:
** flag_scientific
*/

#include "my.h"

int print_scientific(double argument, int type, int size);

int flag_e_up(va_list list)
{
    return (print_scientific(va_arg(list, double), 2, 6));
}

int flag_e(va_list list)
{
    return (print_scientific(va_arg(list, double), 1, 6));
}
