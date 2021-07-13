/*
** EPITECH PROJECT, 2021
** error meniu
** File description:
** sous fonction
*/

#include "../include/function.h"

int error_menu(sokoban *use)
{
    int o = 0;
    int x = 0;
    int p = 0;

    for (int i = 0; use->map[i] != '\0'; i++) {
        if (use->map[i] != ' ' && use->map[i] != '#' && use->map[i] != 'P'
            && use->map[i] != 'X' && use->map[i] != 'O' && use->map[i] != '\n')
                return (84);
        if (use->map[i] == 'X')
            x++;
        if (use->map[i] == 'O')
            o++;
        if (use->map[i] == 'P')
            p++;
    }
    if (x != o || x == 0 || o == 0 || p != 1)
        return (84);
    return (0);
}