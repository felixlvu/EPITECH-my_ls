/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MYL_H
    #define MYL_H

    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <dirent.h>
    #include <unistd.h>
    #include <pwd.h>
    #include <time.h>

    int flag_l(char **arv, char *direc);
    int flag_a(char *direc);
    int check_isdir(char **arv, char *direc, int flag, int count);
    int flag_d(char *direc);
    int main(int arc, char **arv);
    int no_flags(char *direc);
    void sort_alphabet(char *tab[], int len);
    char **sort_alphabet_main(char *direc);
#endif
