/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** width
*/

#ifndef WIDTH
#define WIDTH

int width_number(va_list arguments, char *str, int i, va_list copy);

struct width {
    char width;
    int (*prinw)(va_list arguments, char *str, int i, va_list copy);
};

static const struct width WIDTH_PRINT[] =
{
    {'1', &width_number},
    {'2', &width_number},
    {'3', &width_number},
    {'4', &width_number},
    {'5', &width_number},
    {'6', &width_number},
    {'7', &width_number},
    {'8', &width_number},
    {'9', &width_number}
};

#endif