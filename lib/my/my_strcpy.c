/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** task01 for Day06
*/

#include "my.h"

char *my_strcpy(char *dest , char  const *src)
{
    for (int i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return (dest);
}