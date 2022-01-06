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

void move_rect2(allsf_t *allsf)
{
    allsf->time2 = sfClock_getElapsedTime(allsf->clock2);
    allsf->seconds = allsf->time2.microseconds / 1000000.0;
    if (allsf->seconds > 0.05) {
        allsf->buf[1][1]->rect.left -= 288;
        allsf->buf[1][2]->rect.left += 300;
        allsf->buf[1][2]->pos.x -= 50;
        if (allsf->buf[1][2]->pos.x <= -320)
            allsf->buf[1][2]->pos.x = 1920;
        if (allsf->buf[1][1]->rect.left <= 2880)
            allsf->buf[1][1]->rect.left = 6336 - 288;
        if (allsf->buf[1][2]->rect.left >= 3000)
            allsf->buf[1][2]->rect.left = 0;
        sfClock_restart(allsf->clock2);
    }
}

void move_rect3(allsf_t *allsf)
{
    allsf->time5 = sfClock_getElapsedTime(allsf->clock5);
    allsf->seconds = allsf->time5.microseconds / 1000000.0;
    if (allsf->seconds > 0.08) {
        allsf->buf[1][4]->rect.left -= 288;
        if (allsf->buf[1][4]->rect.left <= 2880 + (288 * 5))
            allsf->buf[1][4]->rect.left = 6336 - 288;
        sfClock_restart(allsf->clock5);
    }
}

void death(allsf_t *allsf)
{
    allsf->time4 = sfClock_getElapsedTime(allsf->clock4);
    allsf->seconds = allsf->time4.microseconds / 1000000.0;
    if (allsf->seconds > 0.1) {
        if (allsf->skip >= 20) {
            allsf->death = 0;
            allsf->back = 0;
            allsf->skip = 0;
        }
        allsf->skip++;
        allsf->buf[1][3]->rect.left -= 288;
        if (allsf->buf[1][3]->rect.left <= 0)
            allsf->buf[1][3]->rect.left = 6336 - 288;
        sfClock_restart(allsf->clock4);
    }
}
