/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** task08 for Day06
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\0')
            return (str);
        else if (str[i] > 65 && str[i] < 90 || str[i] == 32) {
        }
        else
            str[i] = str[i] - 32;
    }
    return (str);
}