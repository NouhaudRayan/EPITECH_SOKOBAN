/*
** EPITECH PROJECT, 2020
** insertion avec postion liste chainee
** File description:
** fonction liste chainees
*/

#include "../include/structure.h"

list *insertion_pos(list *liste, char newnbr, int pos)
{
    list *new = malloc(sizeof(*new));
    list *prec = liste;
    list *cur = liste;

    if (liste == NULL)
        return (NULL);
    if (new != NULL) {
        new->str = newnbr;
        new->next = NULL;
    }
    if (pos == 0) {
        new->str = newnbr;
        new->next = cur;
        return (new);
    }
    for (int i = 0; i < pos; i++, prec = cur, cur = cur->next);
    prec->next = new;
    new->next = cur;
    return (new);
}