/*
** EPITECH PROJECT, 2020
** MY_H
** File description:
** MY_H
*/

#ifndef MY_H
#define MY_H
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "width.h"
#include "specifer.h"
#include "flags.h"


int advance(char *buff, char word);
int find_sizefiles(char *str);
long my_atoll(char *str);
int my_atoi(const char *to_transform);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup (int nb);
int my_signe(char const *str);
int my_getnbr(char *str);
int my_is_prime(int nb);
int my_isneg(int n);
long my_longlen(long nb);
char *my_memset_c(char *str, char caracter, int size);
int my_nbr_base(int nb, int x);
int my_put_nbr(int nb);
int my_put_nbrbase(int nb, int x);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_arrays(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_result (int result);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest , char  const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat (char *dest, char const * src, int nb);
int my_result (int result);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest , char  const *src , int n);
char *my_strstr(char *str , char  const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);


int choice(int size_original, char *str, int i, va_list copy);
int flags_hashtag(va_list arguments, char *str, int i, va_list copy);
int flags_more(va_list arguments, char *str, int i, va_list copy);
int flags_space(va_list arguments, char *str, int i, va_list copy);
int flags_zero(va_list arguments, char *str, int i, va_list copy);
char *for_len(char *str, int i);
int get_size(char *str, int i);
int is_neg(int number);
int my_first_size(va_list copy, char *str, int i);
int callstr_1(char *str, int i, va_list arguments, va_list copy);
int my_printf(char *str, ...);
int size_str(va_list copy);
int specifer_b(va_list arguments, char *str, int i);
int specifer_c(va_list arguments, char *str, int i);
int specifer_d_i(va_list arguments, char *str, int i);
int specifer_n(va_list arguments, char *str, int i);
int specifer_o(va_list arguments, char *str, int i);
int length(unsigned long nb);
unsigned long my_specifier_p_get_nbr(char *str);
char *my_d_to_h_min(char *str, int modulo, char letters, unsigned long nb);
char *get_list_str(unsigned long nb);
int specifer_p(va_list arguments, char *temp, int i);
int specifer_pourcent(va_list arguments, char *str, int i);
int specifer_s(va_list arguments, char *str, int i);
int specifer_smaj(va_list arguments, char *str, int i);
int specifer_u(va_list arguments, char *str, int i);
int specifer_x(va_list arguments, char *str, int i);
int specifer_xmaj(va_list arguments, char *str, int i);
int width_number(va_list arguments, char *str, int i, va_list copy);
int **malloc_doubleint(int x, int y);
void free_multiple_char(char **result, int x);
void free_multiple_int(int **result, int x);

#endif /* !MY_H */
