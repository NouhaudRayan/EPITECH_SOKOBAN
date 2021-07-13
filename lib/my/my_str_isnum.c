/*
** EPITECH PROJECT, 2020
** B-CPE-100-NCY-1-1-cpoolday06-rayan.nouhaud
** File description:
** task13 for Day06
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
                return (0);
    return (1);
}