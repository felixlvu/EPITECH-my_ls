/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef MY_H
    #define MY_H

typedef struct printf {
    char flag;
    int (*func_ptr)(va_list);
}printf_s;

    int flag_u(va_list);
    int flag_plus(va_list);
    int flag_di(va_list);
    int flag_b(va_list);
    int flag_x_maj(va_list);
    int flag_x(va_list);
    int flag_o(va_list);
    int flag_s(va_list);
    int flag_c(va_list);
    int flag_p(va_list);
    int flag_f(va_list);
    int flag_e(va_list);
    int flag_e_up(va_list);
    int flag_s_up(va_list list);

    int my_printf(char *format, ...);
    int decimal_to_octal(unsigned int nb);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_find_prime_sup(int nb);
    int my_getnbr(char const *str);
    int my_isneg(int nb);
    int my_is_prime(int nb);
    int my_numbin(unsigned int nb);
    int my_numhexa(unsigned int nb);
    int my_numhexa_min(unsigned int nb);
    int my_numhexa_ptr(long unsigned int nb);
    int my_numlen(int nb);
    int my_numoct(unsigned int nb);
    int my_putchar(char c);
    int my_put_float(double nb, int precision);
    int my_put_nbrsign(int nb);
    int my_putstr(char const *str);
    char *my_revstr(char *str);
    int my_showmem(char const *str, int size);
    int my_showstr(char const *str);
    void my_sort_int_array(int *tab, int size);
    char *my_strcapitalize(char *str);
    char *my_strcat(char *dest, char const *src);
    int	my_strcmp(char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    int my_str_isalpha(char const *str);
    int my_str_islower(char const *str);
    int my_str_isnum(char const *str);
    int my_str_isprintable(char const *str);
    int my_str_isupper(char const *str);
    int my_strlen(char const *str);
    char *my_strlowcase(char *str);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strstr(char *str, char const *to_find);
    int my_str_tablen(char **tab);
    char *my_strupcase(char *str);
    void my_swap (int *a ,int *b);
    int my_unsigned_put_nbr(unsigned int nb);
    int non_printable_characters(char *str, int i);
    int print_addressptr(void *ptr);
    int print_case_min(int nb);
#endif
