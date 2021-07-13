/*
** EPITECH PROJECT, 2021
** my sokoban
** File description:
** sous fonction
*/

#include "../include/function.h"

void my_sokoban(sokoban *use)
{
    int c = 0;

    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    display_map(use, 0);
    while (use->win == 0 && use->lose == 0) {
        c = getch();
        if (c == 27)
            use->lose = 1;
        if (move_detect(use, c) != 0) {
            clear();
            display_map(use, move_detect(use, c));
        }
        end_condition(use);
        refresh();
    }
    endwin();
}