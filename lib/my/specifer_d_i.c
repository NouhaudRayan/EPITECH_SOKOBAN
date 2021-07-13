/*
** EPITECH PROJECT, 2020
** Specifier d
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_d_i(va_list arguments, char *str, int i)
{
    int result = va_arg(arguments, int);

    if (result < 0)
        my_putchar('-');
    my_put_nbr(result);
    return (result);
}