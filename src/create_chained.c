/*
** EPITECH PROJECT, 2021
** created the liste chained contain the map
** File description:
** sous fonction
*/

#include "../include/function.h"

void create_chained(sokoban *use)
{
    int i = 0;
    int x = 0;

    use->the_map = initialisation_arg(use->map[i]);
    for (i = 1; use->map[i] != '\0'; i++) {
        insertion_pos(use->the_map, use->map[i], i);
        if (use->map[i] == 'P')
            use->position = i;
        if (x == 0)
            use->horizontal++;
        if (use->map[i] == '\n' && x == 0)
            x++;
        if (use->map[i] == '\n')
            use->vertical++;
    }
    use->vertical++;
}