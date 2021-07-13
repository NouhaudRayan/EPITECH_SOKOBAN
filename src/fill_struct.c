/*
** EPITECH PROJECT, 2021
** fill the struct
** File description:
** sous fonctio
*/

#include "../include/function.h"

void fill_struct(sokoban *use, char **av, int ac)
{
    use->ac = ac;
    use->av = av;
    use->win = 0;
    use->lose = 0;
    use->boolean = 0;
    use->up = malloc(sizeof(box_handle));
    use->down = malloc(sizeof(box_handle));
    use->left = malloc(sizeof(box_handle));
    use->right = malloc(sizeof(box_handle));
    use->left->circle = ' ';
    use->right->circle = ' ';
    use->up->circle = ' ';
    use->down->circle = ' ';
}