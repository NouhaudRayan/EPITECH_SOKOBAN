/*
** EPITECH PROJECT, 2020
** B-CPE-100-NCY-1-1-cpoolday06-rayan.nouhaud
** File description:
** task16 for Day06
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '!')
                return (0);
    return (1);
}