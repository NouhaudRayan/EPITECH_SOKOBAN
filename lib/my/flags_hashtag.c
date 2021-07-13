/*
** EPITECH PROJECT, 2020
** specifer #
** File description:
** sous fonction lib
*/

#include "my.h"

int flags_hashtag(va_list arguments, char *str, int i, va_list copy)
{
    if (str[i + 1] == 'x')
        my_putstr("0x");
    if (str[i + 1] == 'X')
        my_putstr("0X");
    if (str[i + 1] == 'o')
        my_putstr("0");
    return (i);
}