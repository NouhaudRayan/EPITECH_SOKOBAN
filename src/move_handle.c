/*
** EPITECH PROJECT, 2021
** handle of the arrow movement
** File description:
** sous fonction
*/

#include "../include/function.h"

void move_handle(sokoban *use, int i)
{
    if (i == 1)
        up_arrow(use);
    if (i == 2)
        down_arrow(use);
    if (i == 3)
        right_arrow(use);
    if (i == 4)
        left_arrow(use);
}