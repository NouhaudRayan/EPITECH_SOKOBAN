/*
** EPITECH PROJECT, 2020
** suppresion at a position gift
** File description:
** fonction liste chainees
*/

#include "../include/structure.h"

list *suppression_pos(list *liste, int pos)
{
    list *new = liste;
    list *prec = liste;
    list *cur = liste;

    if (liste == NULL)
        return (NULL);
    if (pos == 0) {
        liste = liste->next;
        return (liste);
    }
    for (int i = 0; i < pos && new != NULL; i++) {
        prec = new;
        new = new->next;
        cur = new->next;
    }
    prec->next = cur;
    free(new);
    return (liste);
}
