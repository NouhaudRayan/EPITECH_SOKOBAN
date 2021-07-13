/*
** EPITECH PROJECT, 2020
** specifer X
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_xmaj(va_list arguments, char *str, int i)
{
    int x = 0;
    unsigned long tmp = 0;
    char *result = NULL;

    tmp = va_arg(arguments, unsigned long);
    result = malloc(sizeof(char) * (tmp + 1));
    while (tmp > 0) {
        if (tmp % 16 >= 10)
            result[x] = ((tmp % 16) % 10) + 'A';
        else
            result[x] = (tmp % 16) + '0';
        tmp /= 16;
        x++;
    }
    result[x] = '\0';
    my_revstr(result);
    my_putstr(result);
    free(result);
    return (0);
}