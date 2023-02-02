/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** putstr
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    int index = 0;

    for (; str[index] != '\0'; index += 1) {
        my_putchar(str[index]);
    }
    return (index);
}
