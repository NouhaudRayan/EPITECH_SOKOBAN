#!/usr/bin/env bash
##
## EPITECH PROJECT, 2020
## my_build
## File description:
## task01 for Day07
##

gcc -c *.c
ar rc ../libmy.a *.o
rm *.o