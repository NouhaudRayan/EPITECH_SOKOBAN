/*
** EPITECH PROJECT, 2021
** take the map since a .txt and put in on a src
** File description:
** sous fonction
*/

#include "../include/function.h"

int find_sizefiles(char *str)
{
    struct stat info;

    stat(str, &info);
    return (info.st_size);
}

void create_map(char **av, sokoban *use)
{
    int nepo = 0;
    int dear = 0;
    int size = find_sizefiles(av[1]);
    use->map = malloc(sizeof(char) * size + 1);

    nepo = open(av[1], O_RDONLY);
    if (nepo == -1)
        exit(84);
    dear = read(nepo, use->map, size);
    if (dear == -1)
        exit(84);
    use->map[size] = '\0';
    close(nepo);
}