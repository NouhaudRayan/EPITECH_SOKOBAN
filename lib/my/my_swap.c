/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** task01 for Day04
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}