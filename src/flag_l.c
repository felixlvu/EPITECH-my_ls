/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "myl.h"
#include <grp.h>

void print_perm(char *temp)
{
    struct stat sfile;

    stat(temp, &sfile);
    if (S_ISDIR(sfile.st_mode)) {
        my_printf("d");
    } else {
        my_printf("-");
    }
    my_printf((sfile.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((sfile.st_mode & S_IWUSR) ? "w" : "-");
    my_printf((sfile.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((sfile.st_mode & S_IRGRP) ? "r" : "-");
    my_printf((sfile.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((sfile.st_mode & S_IXOTH) ? "x" : "-");
    my_printf((sfile.st_mode & S_IROTH) ? "r" : "-");
    my_printf((sfile.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((sfile.st_mode & S_IXUSR) ? "x" : "-");
    my_printf(".");
}

void format_time(char *str)
{
    char *temp;
    temp = str;
    temp[16] = '\0';
    temp += 4;
    my_printf(" %s", temp);
}

void print_other(char *temp, DIR * rep)
{
    struct stat sfile;
    struct passwd *pws = NULL;
    struct group *grp = NULL;

    stat(temp, &sfile);
    pws = getpwuid(sfile.st_uid);
    my_printf(" %i", sfile.st_nlink);
    if (pws) {
        my_printf(" %s", pws->pw_name);
    } else {
        my_printf(" %i", sfile.st_uid);
    }
    grp = getgrgid(sfile.st_gid);
    if (grp) {
        my_printf(" %s", grp->gr_name);
    } else {
        my_printf(" %i", sfile.st_gid);
    }
    my_printf(" %d", sfile.st_size);
    format_time(ctime(&sfile.st_mtime));
}

int disp_total_block(char *direc)
{
    DIR *dir = opendir(direc);
    struct stat sfile;
    struct dirent *entry;
    int total = 0;
    char temp[256] = {0};

    while ((entry = readdir (dir)) != NULL) {
        my_strcpy(temp, direc);
        if (entry->d_name[0] != '.') {
            my_strcat(temp, entry->d_name);
            stat(temp, &sfile);
            total += sfile.st_blocks;
        }
    }
    closedir(dir);
    my_printf("total %d\n", total / 2);
    return 0;
}

int flag_l(char **arv, char *direc)
{
    DIR * rep = opendir (direc);
    if (rep == NULL)
        exit (84);
    struct dirent *entry = NULL;
    struct stat sfile;
    char temp[256] = {0};
    disp_total_block(direc);

    while ((entry = readdir (rep)) != NULL) {
        my_strcpy(temp, direc);
        if (entry->d_name[0] != '.') {
            my_strcat(temp, entry->d_name);
            print_perm(temp);
            print_other(temp, rep);
            my_printf(" %s", entry->d_name);
            my_printf("\n");
        }
    }
    closedir(rep);
    return 0;
}
