/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** set
*/

#include "my.h"

void setscale(allsf_t *allsf)
{
    for (int i = 1; i < 7; i++)
        sfSprite_setScale(allsf->buf[2][i]->sp, allsf->buf[2][i]->scale);
    for (int i = 1; i < 5; i++)
        sfSprite_setScale(allsf->buf[1][i]->sp, allsf->buf[1][i]->scale);
    for (int i = 2; i < 13; i++)
        sfSprite_setScale(allsf->buf[0][i]->sp, allsf->buf[0][i]->scale);
}

void setpos(allsf_t *allsf)
{
    if (allsf->buf[1][1]->pos.y >= 700)
        allsf->speed = 0;
    for (int i = 1; i < 7; i++)
        sfSprite_setPosition(allsf->buf[2][i]->sp, allsf->buf[2][i]->pos);
    for (int i = 1; i < 5; i++)
        sfSprite_setPosition(allsf->buf[1][i]->sp, allsf->buf[1][i]->pos);
    for (int i = 2; i < 13; i++)
        sfSprite_setPosition(allsf->buf[0][i]->sp, allsf->buf[0][i]->pos);
}

void settextrect(allsf_t *allsf)
{
    for (int i = 1; i < 7; i++)
        sfSprite_setTextureRect(allsf->buf[2][i]->sp, allsf->buf[2][i]->rect);
    for (int i = 1; i < 5; i++)
        sfSprite_setTextureRect(allsf->buf[1][i]->sp, allsf->buf[1][i]->rect);
    for (int i = 2; i < 13; i++)
        sfSprite_setTextureRect(allsf->buf[0][i]->sp, allsf->buf[0][i]->rect);
}
