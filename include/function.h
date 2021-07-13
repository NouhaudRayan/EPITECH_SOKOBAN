/*
** EPITECH PROJECT, 2021
** FUNCTION
** File description:
** FUNCTION
*/

#ifndef FUNCTION
#define FUNCTION
#include "structure.h"
#include "my.h"
#include <ncurses.h>

typedef struct {
    char square;
    char circle;
} box_handle;

typedef struct {
    int ac;
    int win;
    int lose;
    char *map;
    char **av;
    int boolean;
    int position;
    int vertical;
    int horizontal;
    list *the_map;
    box_handle *up;
    box_handle *down;
    box_handle *left;
    box_handle *right;
} sokoban;

int main(int, char **);

void helper();


int error_menu(sokoban *);

void create_map(char **, sokoban *);

void create_chained(sokoban *);

void fill_struct(sokoban *, char **, int);


void my_sokoban(sokoban *);

void display_map(sokoban *, int);


int move_detect(sokoban *, int);

void move_handle(sokoban *, int);

void right_arrow(sokoban *);

void left_arrow(sokoban *);

void up_arrow(sokoban *);

void down_arrow(sokoban *);


void end_condition(sokoban *);

int win_condition(sokoban *);

int lose_condition(sokoban *);

int handle_corner(sokoban *, list *, int);

#endif /* !FUNCTION */