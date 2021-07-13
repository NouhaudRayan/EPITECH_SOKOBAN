/*
** EPITECH PROJECT, 2020
** my_is_prim
** File description:
** task06 for Day05
*/

#include "my.h"

int my_is_prime(int nb)
{
    int compteur;

    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    for (int i = 1; i <= nb; i++)
        if (nb % i == 0)
            compteur++;
    if (compteur > 2)
        return (0);
    return (1);
}