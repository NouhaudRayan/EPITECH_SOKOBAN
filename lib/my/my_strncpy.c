/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** task02 for Day06
*/

#include "my.h"

char *my_strncpy(char *dest , char  const *src , int n)
{
    for (int i = 0; i < n; i++) {
        if (src[i] == '\0')
            return (0);
        else
            dest[i] = src[i];
    }
    return (dest);
}