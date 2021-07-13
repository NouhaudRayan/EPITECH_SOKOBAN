/*
** EPITECH PROJECT, 2020
** specifer s
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_s(va_list arguments, char *str, int i)
{
    char *result = va_arg(arguments, char *);

    my_putstr(result);
    return (0);
}