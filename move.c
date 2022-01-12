/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** move
*/

#include "my.h"

void jump(allsf_t *allsf)
{
    allsf->time3 = sfClock_getElapsedTime(allsf->clock3);
    allsf->seconds = allsf->time3.microseconds / 1000000.0;
    if (allsf->seconds > 0.01) {
        allsf->buf[1][1]->pos.y -= 20 - allsf->speed;
        sfSprite_setPosition(allsf->buf[1][1]->sp, allsf->buf[1][1]->pos);
        sfClock_restart(allsf->clock3);
        allsf->speed++;
    }
}

void limit(allsf_t *allsf)
{
    if (allsf->buf[0][2]->rect.left >= 1920)
        allsf->buf[0][2]->rect.left = 0;
    if (allsf->buf[0][3]->rect.left >= 1920)
        allsf->buf[0][3]->rect.left = 0;
    if (allsf->buf[0][4]->rect.left >= 1920)
        allsf->buf[0][4]->rect.left = 0;
    if (allsf->buf[0][5]->rect.left >= 1920)
        allsf->buf[0][5]->rect.left = 0;
    if (allsf->buf[0][6]->rect.left >= 1920)
        allsf->buf[0][6]->rect.left = 0;
    if (allsf->buf[0][9]->rect.left >= 1920 + 917)
        allsf->buf[0][9]->rect.left = 0;
    if (allsf->buf[0][7]->rect.left >= 1920)
        allsf->buf[0][7]->rect.left = 0;
    if (allsf->buf[0][8]->rect.left >= 1920)
        allsf->buf[0][8]->rect.left = 0;
    if (allsf->buf[0][10]->rect.left >= 1920)
        allsf->buf[0][10]->rect.left = 0;
    if (allsf->buf[0][11]->rect.left >= 1920)
        allsf->buf[0][11]->rect.left = 0;
}

void move_rect(allsf_t *allsf)
{
    allsf->time = sfClock_getElapsedTime(allsf->clock);
    allsf->seconds = allsf->time.microseconds / 1000000.0;
    if (allsf->seconds > 0.03) {
        allsf->buf[0][2]->rect.left += 16;
        allsf->buf[0][3]->rect.left += 15;
        allsf->buf[0][4]->rect.left += 12;
        allsf->buf[0][5]->rect.left += 10;
        allsf->buf[0][6]->rect.left += 8;
        allsf->buf[0][9]->rect.left += 1;
        allsf->buf[0][7]->rect.left += 6;
        allsf->buf[0][8]->rect.left += 4;
        allsf->buf[0][10]->rect.left += 2;
        allsf->buf[0][11]->rect.left += 1;
        limit(allsf);
        sfClock_restart(allsf->clock);
    }
}

void killperso(allsf_t *allsf)
{
    if ((allsf->buf[1][2]->pos.x - 100 >= allsf->buf[1][1]->pos.x
    && allsf->buf[1][2]->pos.x - 100 <= allsf->buf[1][1]->pos.x + 160)
    && (allsf->buf[1][2]->pos.y + 100 >= allsf->buf[1][1]->pos.y
    && allsf->buf[1][2]->pos.y + 100 <= allsf->buf[1][1]->pos.y + 288)) {
        sfSound_stop(allsf->storage[0][0]->sound);
        sfSound_play(allsf->storage[0][2]->sound);
        allsf->death = 1;
    }
    if ((allsf->buf[1][5]->pos.x - 100 >= allsf->buf[1][1]->pos.x
    && allsf->buf[1][5]->pos.x - 100 <= allsf->buf[1][1]->pos.x + 160)
    && (allsf->buf[1][5]->pos.y + 100 >= allsf->buf[1][1]->pos.y
    && allsf->buf[1][5]->pos.y + 100 <= allsf->buf[1][1]->pos.y + 288)) {
        sfSound_stop(allsf->storage[0][0]->sound);
        sfSound_play(allsf->storage[0][2]->sound);
        allsf->death = 1;
    }
}

void move_rect6(allsf_t *allsf)
{
    allsf->time7 = sfClock_getElapsedTime(allsf->clock7);
    allsf->seconds = allsf->time7.microseconds / 1000000.0;
    if (allsf->seconds > 0.05) {
        allsf->buf[1][5]->pos.x -= 50;
        sfClock_restart(allsf->clock7);
    }
}
