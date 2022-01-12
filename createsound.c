/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** sound
*/

#include "my.h"

void createsound(allsf_t *allsf)
{
    allsf->storage[0][0] = create_sound("picandsound/gamesound.ogg",
    allsf->vol);
    allsf->storage[0][1] = create_sound("picandsound/jump.ogg",
    allsf->vol - 40);
    allsf->storage[0][2] = create_sound("picandsound/gameover.ogg",
    allsf->vol - 10);
    allsf->storage[0][3] = create_sound("picandsound/win.ogg",
    allsf->vol - 10);
}
