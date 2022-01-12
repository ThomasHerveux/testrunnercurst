/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** init
*/

#include "my.h"

void initclock(allsf_t *allsf)
{
    allsf->clock = sfClock_create();
    allsf->clock2 = sfClock_create();
    allsf->clock3 = sfClock_create();
    allsf->clock4 = sfClock_create();
    allsf->clock5 = sfClock_create();
    allsf->clock6 = sfClock_create();
    allsf->clock7 = sfClock_create();
    allsf->clock8 = sfClock_create();
}

void initallsf(allsf_t *allsf)
{
    initclock(allsf);
    allsf->back = 0;
    allsf->skip = 0;
    allsf->seconds = 0;
    allsf->count = 0;
    allsf->speed = 0;
    allsf->death = 0;
    allsf->vol = 70;
    allsf->point = 0;
    allsf->dis = 0;
    allsf->savescore = 0;
    allsf->counter = 0;
    allsf->i = 0;
    allsf->help = 0;
    allsf->win = 0;
    allsf->worm = 0;
    allsf->drake = 0;
    allsf->more = 0;
}

void initmain(allsf_t *allsf)
{
    allsf->mode = (sfVideoMode) {1920, 1080, 32};
    allsf->window = sfRenderWindow_create(allsf->mode,
    "cartoon runner", sfResize | sfClose, NULL);
    initallsf(allsf);
    createsprite(allsf);
    createtext(allsf);
    createsound(allsf);
}
