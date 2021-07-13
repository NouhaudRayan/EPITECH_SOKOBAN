/*
** EPITECH PROJECT, 2020
** choice
** File description:
** sous fonction
*/

#include "my.h"

int choice(int size_original, char *str, int i, va_list copy)
{
    if (str[i + 1] == 's' || str[i + 2] == 's')
        size_original = size_str(copy);
    else if (str[i + 1] == 'c' || str[i + 2] == 'c')
        size_original = 1;
    else
        size_original = my_first_size(copy, str, i);
    return (size_original);
}