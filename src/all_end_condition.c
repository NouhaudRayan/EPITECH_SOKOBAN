/*
** EPITECH PROJECT, 2021
** the end condition of the game, the win and the lose
** File description:
** sous fonction
*/

#include "../include/function.h"

int win_condition(sokoban *use)
{
    list *copy = use->the_map;
    int count = 0;

    for (;copy != NULL ;copy = copy->next)
        if (copy->str == 'O')
            count++;
    if (count == 0)
        return (1);
    return (0);
}

int handle_corner(sokoban *use, list *copy, int x)
{
    if (get(use->the_map, x - 1) == '#'
    && get(use->the_map, x - use->horizontal - 1) == '#')
        return (1);
    if (get(use->the_map, x + 1) == '#'
    && get(use->the_map, x - use->horizontal - 1) == '#')
        return (1);
    if (get(use->the_map, x - 1) == '#'
    && get(use->the_map, x + use->horizontal + 1) == '#')
        return (1);
    if (get(use->the_map, x + 1) == '#'
    && get(use->the_map, x + use->horizontal + 1) == '#')
        return (1);
    return (0);
}

int lose_condition(sokoban *use)
{
    list *copy = use->the_map;
    int i = 0;

    for (int x = 0; copy != NULL; copy = copy->next, x++) {
        if (copy->str == 'X')
            i = handle_corner(use, copy, x);
        if (i != 0)
            return (1);
    }
    return (0);
}

void end_condition(sokoban *use)
{
    if (win_condition(use) == 1)
        use->win = 1;
    if (lose_condition(use) == 1)
        use->lose = 1;
}