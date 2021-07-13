/*
** EPITECH PROJECT, 2020
** width 1
** File description:
** sous fonctoon lib
*/

#include "my.h"

int width_number(va_list arguments, char *str, int i, va_list copy)
{
    int size_original = 0;
    long size = get_size(str, i);
    int final = my_strlen(for_len(str, i));

    size_original = choice(size_original, str, i, copy);
    if (str[i - 1] == '0') {
        if (size - size_original > 0)
            for (size; size - size_original > 0; size--)
                my_putchar('0');
    } else
        if (size - size_original > 0)
            for (size; size - size_original > 0; size--) {
                my_putchar(' ');
            }
    while (final - 1 > 0) {
        i++;
        final--;
    }
    return (i);
}