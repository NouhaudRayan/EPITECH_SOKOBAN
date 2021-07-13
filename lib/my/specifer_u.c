/*
** EPITECH PROJECT, 2020
** specifer u
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_u(va_list arguments, char *str, int i)
{
    unsigned long result;

    result = va_arg(arguments, unsigned long);
    my_put_nbr(result);
    return (0);
}