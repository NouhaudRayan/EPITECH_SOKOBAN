/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** task10 for Day06
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i-1] > 23 && str[i-1] <= 47 || str[i-1] <= ';')
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        if (str[i-1] >= 'A' && str[i-1] <= 'Z'
            || str[i-1] >= 'a' && str[i-1] <= 'z')
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
    }
    return (str);
}