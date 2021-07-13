/*
** EPITECH PROJECT, 2020
** size str
** File description:
** sous fonction
*/

#include "my.h"

int size_str(va_list copy)
{
    char *tmp = va_arg(copy, char *);

    return (my_strlen(tmp));
}
