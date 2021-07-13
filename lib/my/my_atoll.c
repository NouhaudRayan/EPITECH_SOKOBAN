/*
** EPITECH PROJECT, 2020
** my_atoll
** File description:
** Fonction Lib
*/

#include "my.h"

long my_atoll(char *str)
{
    long result;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            result *= 10 + (str[i] - '0');
    }
    return (result);
}