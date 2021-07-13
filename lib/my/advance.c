/*
** EPITECH PROJECT, 2020
** advance to the next backslash
** File description:
** sous fonction
*/

#include "my.h"

int advance(char *buff, char word)
{
    int x = 0;

    while (buff[x] != word)
        x++;
    x++;
    return (x);
}