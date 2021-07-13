/*
** EPITECH PROJECT, 2020
** initialistion list chainee
** File description:
** fonction liste chainees
*/

#include "../include/structure.h"

list *initialisation_arg(char newnbr)
{
    list *list = malloc(sizeof(*list));

    if (list == NULL)
        return NULL;
    list->str = newnbr;
    list->next = NULL;
    return (list);
}