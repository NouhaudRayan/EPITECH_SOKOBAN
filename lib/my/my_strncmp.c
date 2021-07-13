/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** task07 for Day06
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

int my_strncmp(char const *s1, char const *s2, int n)
{
    int result = 0;

    for (int i = 0; i <= n - 1; i++) {
        if (s1[i] != s2[i]) {
            result = s1[i] - s2[i];
            return (my_result(result));
        } else if (s1[i] == '\0' || s2[i] == '\0')
            return (0);
    }
    return (0);
}