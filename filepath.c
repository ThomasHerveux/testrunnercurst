/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** filepath
*/

#include "my.h"

void initcustommap(allsf_t *allsf, char *filepath)
{
    allsf->buffer = malloc(sizeof(char) * 30000);
    allsf->fd = open(filepath, O_RDONLY);
    if (allsf->fd == -1)
        return;
    read(allsf->fd, allsf->buffer, 30000);
    for (int i = 0; allsf->buffer[i] != '\n' && allsf->buffer[i] != '\0'; i++)
        allsf->counter++;
    allsf->counter++;
}

void custommap2(allsf_t *allsf, char *filepath)
{
    if (allsf->buffer[allsf->i] == 'e') {
        allsf->drake = 1;
        allsf->buf[1][2]->pos.x = 2100;
    }
    if (allsf->buffer[allsf->i + allsf->counter] == 'e') {
        allsf->worm = 1;
        allsf->buf[1][5]->pos.x = 2100;
    }
    if (allsf->buf[1][2]->pos.x <= -320) {
        if (allsf->buffer[allsf->i] != 'v') {
            allsf->i++;
            allsf->drake = 0;
        }
    }
    if (allsf->buf[1][5]->pos.x <= -320) {
        if (allsf->buffer[allsf->i] != 'v') {
            allsf->i++;
            allsf->worm = 0;
        }
    }
}

void custommap(allsf_t *allsf, char *filepath)
{
    if (allsf->buffer[allsf->i] == 'v' &&
    allsf->buffer[allsf->i + allsf->counter] == 'v') {
        sfSound_stop(allsf->storage[0][0]->sound);
        if (allsf->death != 1)
            sfSound_play(allsf->storage[0][3]->sound);
        allsf->buf[3][1]->rect.left = 0;
        allsf->win = 1;
        allsf->savescore = allsf->point;
        allsf->back = 0;
        return;
    }
    custommap2(allsf, filepath);
    if (allsf->back != 3)
        move_rect2(allsf);
    if (allsf->worm == 1)
        move_rect6(allsf);
    if (allsf->drake == 1)
        move_rect4(allsf);
}

int loop2(char *map)
{
    allsf_t *allsf = malloc(sizeof(allsf_t));
    initmain(allsf);
    initcustommap(allsf, map);
    sfRenderWindow_setMouseCursorVisible(allsf->window, sfTrue);
    sfRenderWindow_setFramerateLimit(allsf->window, 120);
    allsf->buf[1][2]->pos.x = -620;
    while (sfRenderWindow_isOpen(allsf->window)) {
        while (sfRenderWindow_pollEvent(allsf->window, &allsf->event)) {
            analyse_events(allsf->sfMouseButtonEvent, allsf);
        }
        if (allsf->back == 1)
            custommap(allsf, map);
        setpos(allsf);
        setscale(allsf);
        settextrect(allsf);
        draw(allsf);
    }
    close(allsf->fd);
    destroyall(allsf);
    return EXIT_SUCCESS;
}
