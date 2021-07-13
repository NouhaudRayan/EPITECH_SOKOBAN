/*
** EPITECH PROJECT, 2020
** get the content of a node
** File description:
** fonction liste chainees
*/

#include "../include/structure.h"

char get(list *liste, int pos)
{
    list *new = liste;

    if (liste == NULL)
        return '0';
    for (int i = 0; i < pos; i++) {
        new = new->next;
    }
    return (new->str);
}