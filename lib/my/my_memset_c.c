/*
** EPITECH PROJECT, 2020
** my memeste
** File description:
** sous fonction
*/

#include "my.h"

char *my_memset_c(char *str, char caracter, int size)
{
    for (size; size > 0; size--)
        str[size] = caracter;
    return (str);
}