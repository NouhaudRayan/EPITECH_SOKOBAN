/*
** EPITECH PROJECT, 2021
** down arrow
** File description:
** sous fonction
*/

#include "../include/function.h"

void down_box(sokoban *use, int tmp, int box)
{
    if (get(use->the_map, tmp) == 'X'
    && get(use->the_map, box) != '#') {
        suppression_pos(use->the_map, box);
        insertion_pos(use->the_map, 'X', box);
    }
    if (use->down->circle == 'X')
        use->down->square = ' ';
    else
        use->down->square = use->down->circle;
    use->down->circle = get(use->the_map, tmp);
}

void down_arrow(sokoban *use)
{
    int tmp = use->position + use->horizontal + 1;
    int box = tmp + use->horizontal + 1;

    if (get(use->the_map, tmp) == 'X'
    && get(use->the_map, box) == '#') {
    } else if (get(use->the_map, tmp) != '#') {
        down_box(use, tmp, box);
        suppression_pos(use->the_map, tmp);
        insertion_pos(use->the_map, 'P', tmp);
        suppression_pos(use->the_map, use->position);
        insertion_pos(use->the_map, use->down->square, use->position);
        use->position = tmp;
    }
}