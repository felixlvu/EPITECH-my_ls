/*
** EPITECH PROJECT, 2022
** numhexa_ptr
** File description:
** numhexa_ptr
*/

#include <unistd.h>

int my_numhexa_ptr(long unsigned int nb);

int print_addressptr(void *ptr)
{
    int count = 0;

    write(1, "0x", 2);
    count = my_numhexa_ptr(&ptr);
    return (count);
}
