/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** strlen
*/

int my_numlen(int nb)
{
    if (nb < 0) {
        return 1 + my_numlen(-nb);
    } else if (nb < 10) {
        return 1;
    } else {
        return 1 + my_numlen(nb / 10);
    }
}
