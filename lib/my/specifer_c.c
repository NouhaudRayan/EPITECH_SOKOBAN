/*
** EPITECH PROJECT, 2020
** specifer c
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_c(va_list arguments, char *str, int i)
{
    char result;
    int tmp = 0;

    tmp = va_arg(arguments, int);
    result = (char)tmp;
    my_putchar(result);
    return (0);
}