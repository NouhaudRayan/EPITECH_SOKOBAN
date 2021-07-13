/*
** EPITECH PROJECT, 2020
** specier x
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_x(va_list arguments, char *str, int i)
{
    unsigned long x = 0;
    unsigned long nb = va_arg(arguments, unsigned long);
    char *result = malloc(sizeof(char) * (nb + 2));

    while (nb > 0) {
        if (nb % 16 >= 10)
            result[x] = ((nb % 16) % 10) + 'a';
        else
            result[x] = (nb % 16) + '0';
        nb /= 16;
        x++;
    }
    result[x] = '\0';
    my_revstr(result);
    my_putstr(result);
    free(result);
    return (0);
}