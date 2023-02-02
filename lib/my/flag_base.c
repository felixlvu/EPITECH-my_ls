/*
** EPITECH PROJECT, 2022
** printf
** File description:
** flag_base
*/

#include "my.h"

int flag_b(va_list list)
{
    return (my_numbin(va_arg(list, unsigned int)));
}

int flag_x_maj(va_list list)
{
    return (my_numhexa(va_arg(list, unsigned int)));
}

int flag_x(va_list list)
{
    return (my_numhexa_min(va_arg(list, unsigned int)));
}

int flag_o(va_list list)
{
    return (my_numoct(va_arg(list, unsigned int)));
}
