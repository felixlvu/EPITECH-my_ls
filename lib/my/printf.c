/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** minif
*/

#include "my.h"
#include <unistd.h>

void store_nb(int *nb, int count)
{
    *nb = count;
}

int find_flags(char flag, va_list list, int *count)
{
    int nb = 0;

    printf_s printf_tab[] = {
        {'d', &flag_di}, {'i', &flag_di}, {'c', &flag_c}, {'s', &flag_s},
        {'u', &flag_u}, {'b', &flag_b}, {'X', &flag_x_maj},
        {'o', &flag_o}, {'x', &flag_x}, {'p', &flag_p}, {'f', &flag_f},
        {'+', &flag_plus}, {'e', &flag_e}, {'E', &flag_e_up}, {'S', &flag_s_up}
    };

    if (flag == 'n') {
        store_nb(va_arg(list, int *), *count);
        return (0);
    }
    for (int i = 0; i <= 16; i++) {
        if (flag == printf_tab[i].flag) {
            nb = printf_tab[i].func_ptr(list);
            return (nb);
        }
    }
    return (0);
}

int my_printf(char *format, ...)
{
    va_list list;
    int count = 0;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i += 1) {
        if (format[i] == '%') {
            i += 1;
            count += find_flags(format[i], list, &count);
            i += (format[i] == '+') ? 1 : 0;
        } else {
            write(1, &format[i], 1);
            count += 1;
        }
    }
    va_end(list);
    return (count);
}
