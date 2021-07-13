/*
** EPITECH PROJECT, 2020
** structure
** File description:
** Fonction Printf
*/

#ifndef SPECIFER
#define SPECIFER

int specifer_d_i(va_list arguments, char *str, int i);
int specifer_c(va_list arguments, char *str, int i);
int specifer_s(va_list arguments, char *str, int i);
int specifer_x(va_list arguments, char *str, int i);
int specifer_xmaj(va_list arguments, char *str, int i);
int specifer_p(va_list arguments, char *str, int i);
int specifer_o(va_list arguments, char *str, int i);
int specifer_u(va_list arguments, char *str, int i);
int specifer_n(va_list arguments, char *str, int i);
int specifer_pourcent(va_list arguments, char *str, int i);
int specifer_smaj(va_list arguments, char *str, int i);
int specifer_b(va_list arguments, char *str, int i);
int specifer_n(va_list arguments, char *str, int i);

struct specifer {
    char specifer;
    int (*prins)(va_list arguments, char *str, int i);
};

static const struct specifer SPECIFER_PRINT[] =
{
    {'d', &specifer_d_i},
    {'i', &specifer_d_i},
    {'c', &specifer_c},
    {'s', &specifer_s},
    {'x', &specifer_x},
    {'o', &specifer_o},
    {'p', &specifer_p},
    {'u', &specifer_u},
    {'X', &specifer_xmaj},
    {'%', &specifer_pourcent},
    {'S', &specifer_smaj},
    {'b', &specifer_b},
    {'n', &specifer_n}
};

#endif