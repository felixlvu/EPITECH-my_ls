/*
** EPITECH PROJECT, 2022
** poollib
** File description:
** poollib
*/

int my_put_nbr(int nb);

int decimal_to_octal(unsigned int nb)
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
