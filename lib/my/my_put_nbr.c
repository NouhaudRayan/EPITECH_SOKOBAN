/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** Fonction Lib
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long c = nb;

    if (c == 0)
        my_putchar (0);
    if (c < 0)
        c = c * (-1);
    if (c >= 10)
        my_put_nbr (c / 10);
    my_putchar ((c % 10) + 48);
    return (0);
}