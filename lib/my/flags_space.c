/*
** EPITECH PROJECT, 2020
** specifer space
** File description:
** sous fonction lib
*/

#include "my.h"

int flags_space(va_list arguments, char *str, int i, va_list copy)
{
    int nb = va_arg(copy, int);

    if (str[i + 1] == 'd' || str[i + 1] == 'i') {
        if (nb > 0)
            my_putchar(' ');
    }
    return (i);
}