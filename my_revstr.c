/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    if (str == 0)
        return (0);
    int j = my_strlen(str) - 1;
    int k = 0;
    int storage = 0;
    while (k < j) {
        storage = str[j];
        str[j] = str[k];
        str[k] = storage;
        j--;
        k++;
    }
    return (str);
}