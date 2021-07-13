/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** task06 for Day6
*/

#include "my.h"

int my_result (int result)
{
    if (result > 0)
        return (1);
    if (result < 0)
        return (-1);
    if (result == 0)
        return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int result = 0;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            result = s1[i] - s2[i];
            return (my_result(result));
        }
    }
}