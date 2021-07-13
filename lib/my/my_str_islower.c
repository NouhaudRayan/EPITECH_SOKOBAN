/*
** EPITECH PROJECT, 2020
** B-CPE-100-NCY-1-1-cpoolday06-rayan.nouhaud
** File description:
** task14 for Day06
*/

#include "my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'a' || str[i] > 'z')
                return (0);
    return (1);
}