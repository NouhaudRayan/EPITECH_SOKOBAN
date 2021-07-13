/*
** EPITECH PROJECT, 2021
** detect the move do by the player
** File description:
** sous fonction
*/

#include "../include/function.h"

int move_detect(sokoban *use, int c)
{
    if (c == KEY_UP)
        return (1);
    if (c == KEY_DOWN)
        return (2);
    if (c == KEY_RIGHT)
        return (3);
    if (c == KEY_LEFT)
        return (4);
    if (c == ' ') {
        clear();
        main(use->ac, use->av);
    }
    return (0);
}