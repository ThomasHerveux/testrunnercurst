/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** event
*/

#include "my.h"

void anal_ev4(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (allsf->event.type == sfEvtClosed
    || (allsf->event.type == sfEvtKeyPressed
    && allsf->event.key.code == sfKeyEscape))
        sfRenderWindow_close(allsf->window);
    if (allsf->event.key.code == sfKeySpace && allsf->back == 1) {
        if (allsf->buf[1][1]->pos.y == 700 && allsf->back == 1)
            sfSound_play(allsf->storage[0][1]->sound);
        jump(allsf);
    }
    if (((allsf->event.mouseButton.x < 970
    && allsf->event.mouseButton.x > 800)
    && (allsf->event.mouseButton.y < 570
    && allsf->event.mouseButton.y > 400) && allsf->back == 3)) {
        allsf->back = 1;
        sfSound_play(allsf->storage[0][0]->sound);
        sfSound_setLoop(allsf->storage[0][0]->sound, sfTrue);
    }
}

void anal_ev3(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 1150
    && allsf->event.mouseButton.x > 690)
    && (allsf->event.mouseButton.y < 660
    && allsf->event.mouseButton.y > 525) && allsf->death == 1)) {
        allsf->back = 1;
        allsf->i = 0;
        allsf->death = 0;
        allsf->skip = 0;
        allsf->buf[1][3]->rect.left = 6336 - 288;
        allsf->savescore = allsf->point;
        allsf->point = 0;
        allsf->dis = 1;
        allsf->win = 0;
        sfText_setString(allsf->stock[0][4]->text,
        nbrtostring(allsf->savescore));
    }
    anal_ev(sfMouseButtonEvent, allsf);
    anal_ev2(sfMouseButtonEvent, allsf);
}

void anal_ev2(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 1920
    && allsf->event.mouseButton.x > 1830)
    && (allsf->event.mouseButton.y < 100
    && allsf->event.mouseButton.y > 0) && allsf->back == 1)) {
        allsf->back = 3;
        sfSound_stop(allsf->storage[0][0]->sound);
    }
    if (((allsf->event.mouseButton.x < 1190
    && allsf->event.mouseButton.x > 720)
    && (allsf->event.mouseButton.y < 815
    && allsf->event.mouseButton.y > 660) && allsf->back == 0))
        sfRenderWindow_close(allsf->window);
    if (((allsf->event.mouseButton.x < 120
    && allsf->event.mouseButton.x > 0)
    && (allsf->event.mouseButton.y < 120
    && allsf->event.mouseButton.y > 0) && allsf->back == 2))
        allsf->back = 0;
}

void anal_ev(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 770
    && allsf->event.mouseButton.x > 660)
    && (allsf->event.mouseButton.y < 615
    && allsf->event.mouseButton.y > 510) && allsf->back == 2)) {
        if (allsf->vol >= 10) {
            allsf->vol -= 10;
            sfSound_setVolume(allsf->storage[0][0]->sound, allsf->vol);
            sfSound_setVolume(allsf->storage[0][1]->sound, allsf->vol);
        }
    }
    if (((allsf->event.mouseButton.x < 1265
    && allsf->event.mouseButton.x > 1155)
    && (allsf->event.mouseButton.y < 615
    && allsf->event.mouseButton.y > 510) && allsf->back == 2)) {
        if (allsf->vol <= 90) {
            allsf->vol += 10;
            sfSound_setVolume(allsf->storage[0][0]->sound, allsf->vol);
            sfSound_setVolume(allsf->storage[0][1]->sound, allsf->vol);
        }
    }
}

void analyse_events(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    anal_ev4(sfMouseButtonEvent, allsf);
    if (allsf->event.type == sfEvtMouseButtonPressed) {
        if (((allsf->event.mouseButton.x < 1190
        && allsf->event.mouseButton.x > 720)
        && (allsf->event.mouseButton.y < 440
        && allsf->event.mouseButton.y > 288) && allsf->back == 0)) {
            sfSprite_setPosition(allsf->buf[1][2]->sp,
            (sfVector2f) {1600, 800});
            if (allsf->win == 1)
                sfSound_play(allsf->storage[0][0]->sound);
            allsf->back = 1;
            allsf->i = 0;
        }
        if (((allsf->event.mouseButton.x < 1190
        && allsf->event.mouseButton.x > 720)
        && (allsf->event.mouseButton.y < 620
        && allsf->event.mouseButton.y > 470) && allsf->back == 0))
            allsf->back = 2;
        anal_ev3(sfMouseButtonEvent, allsf);
    }
}
