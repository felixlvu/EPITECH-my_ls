/*
** EPITECH PROJECT, 2022
** Base
** File description:
** convert in hex, oct, bin base
*/

#include "my.h"

int my_put_nbr(int nb);

int my_numhexa(unsigned int nb)
{
    char hexa[500];
    int i = 0;

    while (nb != 0) {
        int temp = 0;
        temp = nb % 16;
        if (temp < 10) {
            hexa[i++] = temp + 48;
        } else {
            hexa[i++] = temp + 55;
        }
        nb /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hexa[j]);
    }
    return (i);
}

int my_numoct(unsigned int nb)
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

int my_numbin(unsigned int nb)
{
    int count = 0;

    for (int i = 31; i >= 0; i--) {
        int k = nb >> i;
        if (k & 1) {
            my_putchar('1');
        } else {
            my_putchar('0');
        }
        count++;
    }
    return (count);
}

int my_numhexa_min(unsigned int nb)
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
