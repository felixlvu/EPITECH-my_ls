/*
** EPITECH PROJECT, 2022
** numbin
** File description:
** numbin
*/

void my_putchar(char c);

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
