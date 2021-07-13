/*
** EPITECH PROJECT, 2020
** f
** File description:
** f
*/

#include "my.h"

unsigned long my_specifier_p_get_nbr(char *str)
{
    unsigned long result = 0;

    for (int i = 0; str[i] != '\0'; i++)
        result = result * 10 + (str[i] - '0');
    return (result);
}

int length(unsigned long nb)
{
    int div = 0;

    for (div; nb != 0; div++)
        nb = nb / 10;
    return (div);
}

char *my_d_to_h_min(char *str, int modulo, char letters, unsigned long nb)
{
    int i = 0;
    char *temp = malloc(sizeof(char) * (length(nb) + 2));

    for (i; nb > 16; i++, modulo = 10, letters = 'a', nb = nb / 16) {
        if (nb % 16 > 9) {
            for (nb; nb % 16 != modulo; modulo++, letters++);
            temp[i] = letters;
        } else
            temp[i] = ((nb % 16) + '0');
    }
    if (nb < 16 && nb > 9) {
        for (nb; nb != modulo; modulo++, letters++);
        temp[i] = letters;
    }
    if (nb < 16 && nb < 9) {
        temp[i] = (nb + '0');
        i++;
    }
    temp[i] = '\0';
    temp = my_revstr(temp);
    return (temp);
}

char *get_list_str(unsigned long nb)
{
    char *temp = malloc(sizeof(char) * (length(nb) + 3));
    int i = 0;

    for (i; nb > 0; i++) {
        temp[i] = ((nb % 10) + '0');
        nb = nb / 10;
    }
    temp[i] = '\0';
    temp = my_revstr(temp);
    return (temp);
}

int specifer_p(va_list arguments, char *temp, int i)
{
    void *ptr = va_arg(arguments, void *);
    char *str = get_list_str((unsigned long)ptr);
    char *result;

    result = my_d_to_h_min(str, 10, 'a', my_specifier_p_get_nbr(str));
    my_putstr("0x");
    my_putstr(result);
}