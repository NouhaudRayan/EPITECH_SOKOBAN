/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** task07 for the Day05
*/

#include "my.h"

int my_find_prime_sup (int nb)
{
    int compteur;

    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    for (int i = 1; i < nb; i++) {
        my_is_prime(nb);
        if (my_is_prime(nb) == 1)
            return (nb);
        else {
            while (my_is_prime(nb) != 1)
                nb++;
        }
    }
    return (0);
}