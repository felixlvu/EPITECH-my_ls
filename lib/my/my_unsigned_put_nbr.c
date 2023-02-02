/*
** EPITECH PROJECT, 2022
** nbrsign
** File description:
** nbrsign
*/

void my_putchar(char c);
int my_put_nbr(int nb);

int my_unsigned_put_nbr(unsigned int nb)
{
    int count = 0;

    if (nb >= 10) {
        count = my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count += 1;
    return (count);
}
