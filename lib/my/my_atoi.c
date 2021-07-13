/*
** EPITECH PROJECT, 2020
** lib
** File description:
** sous fonction
*/

#include "my.h"

int my_atoi(const char *to_transform)
{
    int result = 0;

    for (int i = 0; to_transform[i] != '\0'; i++) {
        if (to_transform[i] >= '0' && to_transform[i] <= '9')
            result *= 10 + to_transform[i] - '0';
    }
    return (result);
}