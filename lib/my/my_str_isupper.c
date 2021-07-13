/*
** EPITECH PROJECT, 2020
** B-CPE-100-NCY-1-1-cpoolday06-rayan.nouhaud
** File description:
** task15 for Day06
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'A' || str[i] > 'Z')
                return (0);
    return (1);
}