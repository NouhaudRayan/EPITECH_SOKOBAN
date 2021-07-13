/*
** EPITECH PROJECT, 2020
** flags +
** File description:
** sous fonction lib
*/

#include "my.h"

int flags_more(va_list arguments, char *str, int i, va_list copy)
{
    int nb = va_arg(copy, int);

    if (str[i + 1] == 'd' || str[i + 1] == 'i'
        || str[i + 2] == 'd' || str[i + 2] == 'i') {
        if (nb > 0) {
            my_putchar('+');
            return (i);
        } else
            return (i);
    } else
        return (i);
}