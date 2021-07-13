/*
** EPITECH PROJECT, 2020
** specifer b
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_b(va_list arguments, char *str, int i)
{
    long result;

    result = va_arg(arguments, long);
    my_put_nbrbase(result, 2);
    return (0);
}