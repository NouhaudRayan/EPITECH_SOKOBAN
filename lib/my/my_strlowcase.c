/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** task09 for Day06
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\0')
            return (str);
        else if (str[i] > 97 && str[i] < 122 || str[i] == 32) {
        }
        else
            str[i] = str[i] + 32;
    }
    return (str);
}