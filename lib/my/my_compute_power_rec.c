/*
** EPITECH PROJECT, 2020
** my_compute_power
** File description:
** task04 for Day05
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    if (p == 0)
        return (1);
    if (p < 0)
        return (1);
    return (nb * my_compute_power_rec(nb, p - 1));
}