/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** nbrtostring
*/

#include "my.h"

char *nbrtostring(int nb)
{
    char storage[1000];
    int i = 0;
    while (nb > 0) {
        storage[i] = (nb % 10) + 48;
        i++;
        nb = nb / 10;
    }
    storage[i] = '\0';
    return (my_revstr(storage));
}