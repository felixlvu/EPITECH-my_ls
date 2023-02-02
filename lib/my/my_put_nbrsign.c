/*
** EPITECH PROJECT, 2022
** nbrsign
** File description:
** nbrsign
*/

#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int print_case_min(int nb);

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
