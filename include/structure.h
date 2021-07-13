/*
** EPITECH PROJECT, 2020
** myopen.c
** File description:
** 
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct list list;
struct list
{
    char str;
    list *next;
};

char get(list *, int);

list *initialisation_arg(char);

list *insertion_pos(list *, char, int);

list *suppression_pos(list *, int);