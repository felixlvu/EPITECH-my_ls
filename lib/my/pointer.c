/*
** EPITECH PROJECT, 2022
** printf
** File description:
** pointer
*/

#include "my.h"
#include <unistd.h>

int my_numhexa_ptr(long unsigned int nb)
{
    char hexa[50];
    int i = 0;

    while (nb != 0) {
        int temp = 0;
        temp = nb % 16;
        if (temp < 10) {
            hexa[i++] = temp + 48;
        } else {
            hexa[i++] = temp + 87;
        }
        nb /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hexa[j]);
    }
    return (i);
}

int print_addressptr(void *ptr)
{
    int count = 0;

    write(1, "0x", 2);
    count = my_numhexa_ptr(&ptr);
    return (count);
}

int flag_p(va_list list)
{
    return (print_addressptr(va_arg(list, void *)));
}
