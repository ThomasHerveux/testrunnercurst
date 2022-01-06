/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** drawsprite
*/

#include "my.h"

void extdraw2(allsf_t *allsf)
{
    if (allsf->back == 1) {
        allsf->point++;
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][2]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][5]->sp, NULL);
        killperso(allsf);
        move_rect(allsf);
        move_rect2(allsf);
        sfText_setString(allsf->nbscore, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->score, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->nbscore, NULL);
    }
    if (allsf->back == 0) {
        allsf->point = 0;
        allsf->buf[1][2]->pos.x = 2100;
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][4]->sp, NULL);
        move_rect3(allsf);
    }
}
void extdraw(allsf_t *allsf)
{
    extdraw2(allsf);
    if (allsf->back == 2) {
        allsf->point = 0;
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][4]->sp, NULL);
        for (int i = 2; i < 5; i++)
            sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][i]->sp, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->soundset, NULL);
        move_rect3(allsf);
    }
    if (allsf->back == 3) {
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][2]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][6]->sp, NULL);
        sfText_setString(allsf->nbscore, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->score, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->nbscore, NULL);
    }
    if (allsf->buf[1][1]->pos.y != 700 && allsf->back == 1)
        jump(allsf);
}

void draw(allsf_t *allsf)
{
    sfRenderWindow_clear(allsf->window, sfBlack);
    for (int i = 12; i > 1; i--)
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[0][i]->sp, NULL);
    if (allsf->death == 0) {
        extdraw(allsf);
    }
    if (allsf->death == 1) {
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][3]->sp, NULL);
        sfText_setString(allsf->nbscore, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->score, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->nbscore, NULL);
        death(allsf);
    }
    sfRenderWindow_display(allsf->window);
}
