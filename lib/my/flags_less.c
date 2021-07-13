/*
** EPITECH PROJECT, 2020
** specifer -
** File description:
** sous fonction lib
*/

#include "my.h"

int flags_less(va_list arguments, char *str, int i, va_list copy)
{
    int a = i + 1;
    int size = my_strlen(for_len(str, a));
    int usefull = my_first_size(copy, str, i);

    if (str[i + 1] < '0' && str[i + 1] > '9')
        return (i);
    else {
        while (size - usefull > 0) {
            i++;
        }
    }
    return (i);
}