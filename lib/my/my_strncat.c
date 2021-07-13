/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** task01 for Day07
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int longueur = my_strlen(dest);

    for (int i = 0; src[i] != '\0' && i < nb; i++, longueur++)
        dest[longueur] = src[i];
    dest[longueur] = '\0';
    return (dest);
}