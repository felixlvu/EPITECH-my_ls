/*
** EPITECH PROJECT, 2022
** numhexa_ptr
** File description:
** numhexa_ptr
*/

int my_putchar(char c);

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
