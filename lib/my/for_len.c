/*
** EPITECH PROJECT, 2020
** for len
** File description:
** sous fonction
*/

#include "my.h"

char *for_len(char *str, int i)
{
    int res = 0;
    char *tmp = malloc(sizeof(char) * i);

    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        tmp[res] = str[i];
        res++;
    }
    tmp[res] = '\0';
    return (tmp);
}