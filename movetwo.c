/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** movetwo
*/

#include "my.h"

void move_rect2(allsf_t *allsf)
{
    allsf->time2 = sfClock_getElapsedTime(allsf->clock2);
    allsf->seconds = allsf->time2.microseconds / 1000000.0;
    if (allsf->seconds > 0.05) {
        allsf->buf[1][1]->rect.left -= 288;
        allsf->buf[1][5]->rect.left += 90;
        if (allsf->buf[1][5]->rect.left >= 810)
            allsf->buf[1][5]->rect.left = 0;
        if (allsf->buf[1][1]->rect.left <= 2880)
            allsf->buf[1][1]->rect.left = 6336 - 288;
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

void move_rect4(allsf_t *allsf)
{
    allsf->time6 = sfClock_getElapsedTime(allsf->clock6);
    allsf->seconds = allsf->time6.microseconds / 1000000.0;
    if (allsf->seconds > 0.05) {
        allsf->buf[1][2]->rect.left += 300;
        allsf->buf[1][2]->pos.x -= 50;
        if (allsf->buf[1][2]->rect.left >= 3000)
            allsf->buf[1][2]->rect.left = 0;
        sfClock_restart(allsf->clock6);
    }
}

void move_rect5(allsf_t *allsf)
{
    allsf->time7 = sfClock_getElapsedTime(allsf->clock7);
    allsf->seconds = allsf->time7.microseconds / 1000000.0;
    if (allsf->seconds > 0.1) {
        if (allsf->buf[3][1]->rect.left >= 1100) {
            allsf->buf[3][1]->rect.left = 1100;
            return;
        }
        allsf->buf[3][1]->rect.left += 100;
        sfClock_restart(allsf->clock7);
    }
}

void death(allsf_t *allsf)
{
    allsf->time4 = sfClock_getElapsedTime(allsf->clock4);
    allsf->seconds = allsf->time4.microseconds / 1000000.0;
    if (allsf->seconds > 0.1) {
        if (allsf->skip >= 20) {
            return;
        }
        allsf->skip++;
        allsf->buf[1][3]->rect.left -= 288;
        if (allsf->buf[1][3]->rect.left <= 0)
            allsf->buf[1][3]->rect.left = 6336 - 288;
        sfClock_restart(allsf->clock4);
    }
}
