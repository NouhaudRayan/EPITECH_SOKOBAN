/*
** EPITECH PROJECT, 2021
** display/refresh the map
** File description:
** sous fonction
*/

#include "../include/function.h"

void display_map(sokoban *use, int i)
{
    list *copy = NULL;
    char *str = malloc(sizeof(char) * 2);

    move_handle(use, i);
    copy = use->the_map;
    while (copy != NULL) {
        str[0] = copy->str;
        str[1] = '\0';
        printw(str);
        copy = copy->next;
    }
}