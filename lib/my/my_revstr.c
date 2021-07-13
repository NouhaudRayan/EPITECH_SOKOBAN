/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Fonction Lib
*/

#include "my.h"

char *my_revstr(char *str)
{
    int c = my_strlen(str) - 1;
    int i = 0;

    for (int a = 0;i <= c; i++, c--) {
        a = str[i];
        str[i] = str[c];
        str[c] = a;
    }
    return (str);
}