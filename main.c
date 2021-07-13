/*
** EPITECH PROJECT, 2021
** main
** File description:
** principal function
*/

#include "include/function.h"

int main(int ac, char **av)
{
    sokoban *use = malloc(sizeof(sokoban));

    if (ac != 2)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        helper();
        return (0);
    }
    create_map(av, use);
    if (error_menu(use) == 84)
        return (84);
    create_chained(use);
    fill_struct(use, av, ac);
    my_sokoban(use);
    if (use->lose == 1)
        return (1);
    return (0);
}