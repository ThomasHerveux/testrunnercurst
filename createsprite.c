/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** createsprite
*/

#include "my.h"

void createspritethree(allsf_t *allsf)
{
    allsf->buf[3][0] = create_object("picandsound/lose.png",
    (sfVector2f){550, 100}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){1, 1});
    allsf->buf[3][1] = create_object("picandsound/win.png",
    (sfVector2f) {550, 100},
    (sfIntRect) {0, 0, 100, 100}, (sfVector2f) {2, 2});
}

void createspritezero(allsf_t *allsf)
{
    allsf->buf[0][6] = create_object("picandsound/5.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][9] = create_object("picandsound/6.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][7] = create_object("picandsound/7.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][8] = create_object("picandsound/72.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][10] = create_object("picandsound/8.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][11] = create_object("picandsound/82.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][12] = create_object("picandsound/9.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
}

void createspriteone(allsf_t *allsf)
{
    allsf->buf[1][1] = create_object("picandsound/persop.png",
    (sfVector2f) {-100, 700},
    (sfIntRect) {6336 - 288, 160, 288, 160}, (sfVector2f) {2, 2});
    allsf->buf[1][2] = create_object("picandsound/drake.png",
    (sfVector2f) {-1000, 570},
    (sfIntRect) {0, 0, 300, 300}, (sfVector2f) {1, 1});
    allsf->buf[1][3] = create_object("picandsound/persop.png",
    (sfVector2f) {-100, 700},
    (sfIntRect) {6336 - 288, 160 * 4, 288, 160}, (sfVector2f) {2, 2});
    allsf->buf[1][4] = create_object("picandsound/persop.png",
    (sfVector2f) {-100, 700},
    (sfIntRect){6336 - 288, 0, 288, 160}, (sfVector2f){2, 2});
    allsf->buf[1][5] = create_object("picandsound/worm.png",
    (sfVector2f) {-1000, 780},
    (sfIntRect) {0, 0, 90, 90}, (sfVector2f) {4, 4});
}

void createspritetwo(allsf_t *allsf)
{
    allsf->buf[2][1] = create_object("picandsound/button.png",
    (sfVector2f){500, 100}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){2, 2});
    allsf->buf[2][2] = create_object("picandsound/less.png",
    (sfVector2f){650, 500}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){2, 2});
    allsf->buf[2][3] = create_object("picandsound/more.png",
    (sfVector2f){1150, 500}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){2, 2});
    allsf->buf[2][4] = create_object("picandsound/exit.png",
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){2, 2});
    allsf->buf[2][5] = create_object("picandsound/pause.png",
    (sfVector2f){1830, 0},
    (sfIntRect){0, 0, 450, 450}, (sfVector2f){1.5, 1.5});
    allsf->buf[2][6] = create_object("picandsound/play.png",
    (sfVector2f){800, 400}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){3, 3});
    allsf->buf[2][7] = create_object("picandsound/replay.png",
    (sfVector2f){670, 500}, (sfIntRect){0, 0, 450, 450}, (sfVector2f){2, 2});
}

void createsprite(allsf_t *allsf)
{
    allsf->buf[0][2] = create_object("picandsound/1.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][3] = create_object("picandsound/2.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][4] = create_object("picandsound/3.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    allsf->buf[0][5] = create_object("picandsound/4.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, (sfVector2f) {1, 1});
    createspritezero(allsf);
    createspriteone(allsf);
    createspritetwo(allsf);
    createspritethree(allsf);
}
