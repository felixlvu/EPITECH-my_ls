/*
** EPITECH PROJECT, 2022
** oct
** File description:
** oct
*/

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
    return (i);
}
