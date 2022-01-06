/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** sound
*/

#include "my.h"

void music(allsf_t *allsf)
{
    allsf->sound = sfSound_create();
    allsf->soundbuffer =
    sfSoundBuffer_createFromFile("picandsound/gamesound.ogg");
    sfSound_setBuffer(allsf->sound, allsf->soundbuffer);
    sfSound_setVolume(allsf->sound, allsf->vol);
    sfSound_play(allsf->sound);
    sfSound_setLoop(allsf->sound, sfTrue);
}
