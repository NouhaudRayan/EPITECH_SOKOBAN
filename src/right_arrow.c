/*
** EPITECH PROJECT, 2021
** right arrow
** File description:
** sous fonction
*/

#include "../include/function.h"

void right_box(sokoban *use)
{
    if (get(use->the_map, use->position + 1) == 'X'
    && get(use->the_map, use->position + 2) != '#') {
        suppression_pos(use->the_map, use->position);
        insertion_pos(use->the_map, 'X', use->position + 2);
    }
    if (use->right->circle == 'X')
        use->up->square = ' ';
    else
        use->up->square = use->right->circle;
    use->right->circle = get(use->the_map, use->position + 1);
}

void right_arrow(sokoban *use)
{
    if (get(use->the_map, use->position + 1) == 'X'
    && get(use->the_map, use->position + 2) == '#') {
    } else if (get(use->the_map, use->position + 1) != '#') {
        right_box(use);
        insertion_pos(use->the_map, 'P', use->position + 2);
        suppression_pos(use->the_map, use->position);
        suppression_pos(use->the_map, use->position);
        insertion_pos(use->the_map, use->up->square, use->position);
        use->position++;
    }
}