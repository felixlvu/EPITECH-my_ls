/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** swap
*/

void my_swap (int *a ,int *b)
{
    int inverter = 0;
    inverter = *b;
    *b = *a;
    *a = inverter;
}
