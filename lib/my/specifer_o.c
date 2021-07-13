/*
** EPITECH PROJECT, 2020
** specifer o
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_o(va_list arguments, char *str, int i)
{
    unsigned long tmp = 0;
    int x = 1;
    long result = 0;

    tmp = va_arg(arguments, unsigned long);
    while (tmp > 0) {
        result += (tmp % 8) * x;
        tmp /= 8;
        x *= 10;
    }
    my_put_nbr(result);
    return (0);
}