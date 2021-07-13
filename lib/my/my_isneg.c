/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** task04 for Day03
*/

#include "my.h"

int my_isneg(int n)
{
    if (n >= 0 ) {
        my_putchar('P');
        my_putchar('\n');
    } else {
        my_putchar('N');
        my_putchar('\n');
    }
    return (0);
}
