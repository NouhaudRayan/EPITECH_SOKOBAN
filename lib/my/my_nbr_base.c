/*
** EPITECH PROJECT, 2020
** my nbr base
** File description:
** sous fonction
*/

#include "my.h"

int my_nbr_base(int nb, int x)
{
    long c = nb;

    if (x > 10)
        return (-1);
    if (c == 0)
        my_putchar (0);
    if (c < 0)
        c = c * (-1);
    if (c >= x)
        my_nbr_base(c / x, x);
    return (nb);
}