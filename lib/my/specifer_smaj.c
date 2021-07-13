/*
** EPITECH PROJECT, 2020
** specifer S
** File description:
** sous fonction lib
*/

#include "my.h"

int specifer_smaj(va_list arguments, char *str, int i)
{
    char *result;
    int octal = 0;

    result = va_arg(arguments, char *);
    for (int x = 0; result[x] != '\0'; x++) {
        if (result[x] < 37 || result[x] >= 127) {
            my_putchar('\\');
            octal = result[x];
            my_put_nbrbase(octal, 8);
        } else {
            my_putchar(result[x]);
        }
    }
    return (0);
}