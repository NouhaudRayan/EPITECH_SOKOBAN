/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** Fonction Lib
*/

#include "my.h"

int callstr_1(char *str, int i, va_list arguments, va_list copy)
{
    for (int a = 0; a < 5; a++) {
        if (str[i] == FLAGS_PRINT[a].flags) {
            i = FLAGS_PRINT[a].prinf(arguments, str, i, copy);
            i++;
        }
    }
    for (int x = 0; x < 9; x++) {
        if (str[i] == WIDTH_PRINT[x].width) {
            i = WIDTH_PRINT[x].prinw(arguments, str, i, copy);
            i++;
            }
    }
    for (int e = 0; e < 12; e++) {
        if (str[i] == SPECIFER_PRINT[e].specifer)
            SPECIFER_PRINT[e].prins(arguments, str, i);
    }
    return (i);
}

int my_printf(char *str, ...)
{
    va_list arguments;
    va_list copy;
    va_start(arguments, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            va_copy(copy, arguments);
            i = callstr_1(str, i, arguments, copy);
        } else if (str[i] != '%')
            my_putchar(str[i]);
    }
    va_end(arguments);
    return (1);
}