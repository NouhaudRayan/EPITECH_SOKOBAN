/*
** EPITECH PROJECT, 2020
** my put nbr with a base donne
** File description:
** sous fonction lib
*/

#include "my.h"

int my_put_nbrbase(int nb, int x)
{
    long c = nb;

    if (x > 10)
        return (-1);
    if (c == 0)
        my_putchar (0);
    if (c < 0)
        c = c * (-1);
    if (c >= x)
        my_put_nbrbase(c / x, x);
    my_putchar ((c % x) + '0');
    return (0);
}