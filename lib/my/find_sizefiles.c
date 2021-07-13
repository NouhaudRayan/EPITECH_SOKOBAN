/*
** EPITECH PROJECT, 2020
** find size with stat
** File description:
** sous fonction
*/

#include "my.h"

int find_sizefiles(char *str)
{
    struct stat info;

    stat(str, &info);
    return (info.st_size);
}