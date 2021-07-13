/*
** EPITECH PROJECT, 2021
** left arrow
** File description:
** sous fonction
*/

#include "../include/function.h"

void left_box(sokoban *use)
{
    if (get(use->the_map, use->position - 1) == 'X'
    && get(use->the_map, use->position - 2) != '#') {
        suppression_pos(use->the_map, use->position);
        insertion_pos(use->the_map, 'X', use->position - 2);
    }
    if (use->left->circle == 'X')
        use->up->square = ' ';
    else
        use->up->square = use->left->circle;
    use->left->circle = get(use->the_map, use->position - 1);
}

void left_arrow(sokoban *use)
{
    if (get(use->the_map, use->position - 1) == 'X'
    && get(use->the_map, use->position - 2) == '#') {
    } else if (get(use->the_map, use->position - 1) != '#') {
        left_box(use);
        insertion_pos(use->the_map, 'P', use->position - 1);
        suppression_pos(use->the_map, use->position + 1);
        suppression_pos(use->the_map, use->position);
        insertion_pos(use->the_map, use->up->square, use->position);
        use->position--;
    }
}