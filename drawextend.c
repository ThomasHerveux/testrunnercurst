/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** drawextend
*/

#include "my.h"

void extenddraw(allsf_t *allsf)
{
    if (allsf->death == 1) {
        allsf->buf[1][2]->pos.x = -1100;
        allsf->buf[1][5]->pos.x = -1100;
        sfText_setPosition(allsf->stock[0][1]->text, (sfVector2f){700, 380});
        sfText_setPosition(allsf->stock[0][2]->text, (sfVector2f){970, 380});
        sfText_setCharacterSize(allsf->stock[0][1]->text, 75);
        sfText_setCharacterSize(allsf->stock[0][2]->text, 75);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[2][7]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[3][0]->sp, NULL);
        sfRenderWindow_drawSprite(allsf->window, allsf->buf[1][3]->sp, NULL);
        sfText_setString(allsf->stock[0][2]->text, nbrtostring(allsf->point));
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][1]->text, NULL);
        sfRenderWindow_drawText(allsf->window, allsf->stock[0][2]->text, NULL);
        death(allsf);
        allsf->help = 0;
    }
    sfRenderWindow_display(allsf->window);
}
