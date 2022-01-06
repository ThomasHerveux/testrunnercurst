/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** event
*/

#include "my.h"

void killperso(allsf_t *allsf)
{
    if ((allsf->buf[1][2]->pos.x - 100 >= allsf->buf[1][1]->pos.x
    && allsf->buf[1][2]->pos.x - 100 <= allsf->buf[1][1]->pos.x + 160)
    && (allsf->buf[1][2]->pos.y + 100 >= allsf->buf[1][1]->pos.y
    && allsf->buf[1][2]->pos.y + 100 <= allsf->buf[1][1]->pos.y + 288))
        allsf->death = 1;
}

void anal_ev3(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 1920
    && allsf->event.mouseButton.x > 1830)
    && (allsf->event.mouseButton.y < 100
    && allsf->event.mouseButton.y > 0) && allsf->back == 1)) {
        allsf->back = 3;
    }
    if (((allsf->event.mouseButton.x < 970
    && allsf->event.mouseButton.x > 800)
    && (allsf->event.mouseButton.y < 570
    && allsf->event.mouseButton.y > 400) && allsf->back == 3)) {
        allsf->back = 1;
    }
}
void anal_ev2(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 1190
    && allsf->event.mouseButton.x > 720)
    && (allsf->event.mouseButton.y < 620
    && allsf->event.mouseButton.y > 470) && allsf->back == 0)) {
        allsf->back = 2;
    }
    if (((allsf->event.mouseButton.x < 1190
    && allsf->event.mouseButton.x > 720)
    && (allsf->event.mouseButton.y < 815
    && allsf->event.mouseButton.y > 660) && allsf->back == 0)) {
        sfRenderWindow_close(allsf->window);
    }
    if (((allsf->event.mouseButton.x < 120
    && allsf->event.mouseButton.x > 0)
    && (allsf->event.mouseButton.y < 120
    && allsf->event.mouseButton.y > 0) && allsf->back == 2)) {
        allsf->back = 0;
    }
}

void anal_ev(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (((allsf->event.mouseButton.x < 770
    && allsf->event.mouseButton.x > 660)
    && (allsf->event.mouseButton.y < 615
    && allsf->event.mouseButton.y > 510) && allsf->back == 2)) {
        if (allsf->vol >= 10) {
            allsf->vol -= 10;
            sfSound_setVolume(allsf->sound, allsf->vol);
        }
    }
    if (((allsf->event.mouseButton.x < 1265
    && allsf->event.mouseButton.x > 1155)
    && (allsf->event.mouseButton.y < 615
    && allsf->event.mouseButton.y > 510) && allsf->back == 2)) {
        if (allsf->vol <= 90) {
            allsf->vol += 10;
            sfSound_setVolume(allsf->sound, allsf->vol);
        }
    }
}

void analyse_events(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf)
{
    if (allsf->event.type == sfEvtClosed
    || allsf->event.key.code == sfKeyEscape)
        sfRenderWindow_close(allsf->window);
    if (allsf->event.key.code == sfKeySpace && allsf->back == 1)
        jump(allsf);
    if (allsf->event.type == sfEvtMouseButtonPressed) {
        if (((allsf->event.mouseButton.x < 1190
        && allsf->event.mouseButton.x > 720)
        && (allsf->event.mouseButton.y < 440
        && allsf->event.mouseButton.y > 288) && allsf->back == 0)) {
            sfSprite_setPosition(allsf->buf[1][2]->sp,
            (sfVector2f) {1600, 800});
            allsf->back = 1;
        }
        anal_ev3(sfMouseButtonEvent, allsf);
        anal_ev2(sfMouseButtonEvent, allsf);
        anal_ev(sfMouseButtonEvent, allsf);
    }
}
