/*
** EPITECH PROJECT, 2020
** get_size
** File description:
** sous fonction
*/

#include "my.h"

int get_size(char *str, int i)
{
    int res = 0;
    char *tmp = malloc(sizeof(char) * i);
    long result = 0;

    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        tmp[res] = str[i];
        res++;
    }
    tmp[res] = '\0';
    result = my_getnbr(tmp);
    return (result);
}