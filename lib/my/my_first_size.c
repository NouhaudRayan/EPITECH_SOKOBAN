/*
** EPITECH PROJECT, 2020
** my first size
** File description:
** sous fonction
*/

#include "my.h"

int is_neg(int number)
{
    int result = 0;

    if (number < 0)
        result = 1;
    else
        result = 0;
    return (result);
}

int size(int number, int result)
{
    for (; number != 0; result++)
        number /= 10;
    return (result);
}

int my_first_size(va_list copy, char *str, int i)
{
    int number = va_arg(copy, int);
    int result = is_neg(number);
    char *tmp = malloc(sizeof(char) * number);

    if (str[i + 1] == 'x' || str[i + 1] == 'X'
        || str[i + 2] == 'x' || str[i + 2] == 'X') {
        for (int x = 0; number > 0; x++) {
            if (number % 16 >= 10)
                tmp[x] = ((number % 16) % 10) + 'a';
            else
                tmp[x] = (number % 16) + '0';
            number /= 16;
            }
        return (my_strlen(tmp));
    }
    if (str[i + 1] == 'o' || str[i + 2] == 'o')
        number = my_nbr_base(number, 8);
    result = size(number, result);
    free(tmp);
    return (result);
}