/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** task04 for Day05
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int result = 1;
    int verification;

    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    if (nb == 0)
        return (0);
    if (nb == 1)
        return (1);
    for (verification; verification != nb; result++)
        verification = result * result;
    return (result);
}