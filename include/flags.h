/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** flags
*/

#ifndef FLAGS
#define FLAGS

int flags_hashtag(va_list arguments, char *str, int i, va_list copy);
int flags_more(va_list arguments, char *str, int i, va_list copy);
int flags_less(va_list arguments, char *str, int i, va_list copy);
int flags_space(va_list arguments, char *str, int i, va_list copy);
int flags_zero(va_list arguments, char *str, int i, va_list copy);

struct flags {
    char flags;
    int (*prinf)(va_list arguments, char *str, int i, va_list copy);
};

static const struct flags FLAGS_PRINT[] =
{
    {'+', &flags_more},
    {'-', &flags_less},
    {' ', &flags_space},
    {'0', &flags_zero},
    {'#', &flags_hashtag}
};

#endif