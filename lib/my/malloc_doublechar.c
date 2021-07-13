/*
** EPITECH PROJECT, 2020
** malloc a double char
** File description:
** sous fonction
*/

#include "my.h"

char **malloc_double_char(int x, int y)
{
    char **result = malloc(sizeof(char *) * x);

    for (int i = 0; i < x; x++)
        result[x] = malloc(sizeof(char) * y);
    return (result);
}