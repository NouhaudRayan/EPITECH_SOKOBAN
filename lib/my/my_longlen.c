/*
** EPITECH PROJECT, 2020
** my_intlen
** File description:
** sous_fonction_lib
*/

#include "my.h"

long my_longlen(long nb)
{
    long count = 0;

    for (count; nb > 0; count++)
        nb /= 10;
    return (count);
}