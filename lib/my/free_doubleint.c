/*
** EPITECH PROJECT, 2020
** free double ine
** File description:
** sous fonction
*/

#include "my.h"

void free_multiple_int(int **result, int x)
{
    for (int i = 0; i < x; i++) {
        free(result[i]);
    }
    free(result);
}