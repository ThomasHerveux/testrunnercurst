/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** drawsprite
*/

#include "my.h"

void extdraw4(allsf_t *allsf)
{
    if (allsf->dis == 1) {
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][3]->text, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][4]->text, NULL);
    }
    if (allsf->back == 0) {
        allsf->point = 0;
        allsf->buf[1][2]->pos.x = -1100;
        allsf->buf[1][5]->pos.x = -1100;
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][4]->sp, NULL);
        move_rect3(allsf);
    }
}

void extdraw3(allsf_t *allsf)
{
    extdraw2(allsf);
    if (allsf->back == 1) {
        allsf->point++;
        sfText_setPosition(allsf->stock[0][1]->text, (sfVector2f){0, 0});
        sfText_setPosition(allsf->stock[0][2]->text, (sfVector2f){100, 0});
        sfText_setCharacterSize(allsf->stock[0][1]->text, 30);
        sfText_setCharacterSize(allsf->stock[0][2]->text, 30);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][2]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][5]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][5]->sp, NULL);
        killperso(allsf);
        move_rect(allsf);
        move_rect2(allsf);
        move_rect4(allsf);
        sfText_setString(allsf->stock[0][2]->text, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][1]->text, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][2]->text, NULL);
    }
}

void extdraw2(allsf_t *allsf)
{
    extdraw4(allsf);
    if (allsf->win == 1 && allsf->back == 0) {
        move_rect5(allsf);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[3][1]->sp, NULL);
        sfText_setPosition(allsf->stock[0][1]->text, (sfVector2f){750, 160});
        sfText_setPosition(allsf->stock[0][2]->text, (sfVector2f){1020, 160});
        sfText_setCharacterSize(allsf->stock[0][1]->text, 75);
        sfText_setCharacterSize(allsf->stock[0][2]->text, 75);
        sfText_setString(allsf->stock[0][2]->text,
        nbrtostring(allsf->savescore));
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][1]->text, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][2]->text, NULL);
    }
}

void extdraw(allsf_t *allsf)
{
    extdraw3(allsf);
    if (allsf->back == 2) {
        allsf->point = 0;
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][4]->sp, NULL);
        for (int i = 2; i < 5; i++)
            sfRenderWindow_drawSprite(allsf->window,
            allsf->buf[2][i]->sp, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][0]->text, NULL);
        move_rect3(allsf);
    }
    if (allsf->back == 3) {
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][1]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][2]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][6]->sp, NULL);
        sfText_setString(allsf->stock[0][2]->text, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][1]->text, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][2]->text, NULL);
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
        if (allsf->help == 0) {
            sfSound_play(allsf->storage[0][0]->sound);
            sfSound_setLoop(allsf->storage[0][0]->sound, sfTrue);
        allsf->help = 1;
        }
    }
    extenddraw(allsf);
}
