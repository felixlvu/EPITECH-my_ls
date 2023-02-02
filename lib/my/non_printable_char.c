/*
** EPITECH PROJECT, 2022
** poollib
** File description:
** poollib
*/

void my_putchar(char c);
int decimal_to_octal(unsigned int nb);
int my_numlen(int nb);

int non_printable_characters(char *str, int i)
{
    int count = 0;
    int nb = 0;
    my_putchar(92);
    count ++;
    nb = str[i];
    if (str[i] >= 0 && str[i] <= 7) {
        my_putchar(48);
        my_putchar(48);
        my_putchar(nb + 48);
        count += 3;
    } else {
        my_putchar(48);
        decimal_to_octal(nb);
        count += my_numlen(nb);
    }
    return (count);
}
