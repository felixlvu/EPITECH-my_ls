/*
** EPITECH PROJECT, 2022
** printf
** File description:
** lib
*/

int my_strlen(char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return x;
}

int my_compute_power_rec(int nb, int p)
{
    int f = 0;
    int resu = 1;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (f < p) {
        resu = my_compute_power_rec(nb, p - 1) * nb;
        f++;
    }
    return (resu);
}
