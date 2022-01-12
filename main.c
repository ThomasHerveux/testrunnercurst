/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** main
*/

#include "my.h"

void destroyall(allsf_t *allsf)
{
    for (int i = 0; i < 4; i++) {
        sfSound_destroy(allsf->storage[0][i]->sound);
        sfSoundBuffer_destroy(allsf->storage[0][i]->soundbuffer);
    }
    free(allsf);
}

int randompos(allsf_t *allsf)
{
    srand(time(NULL));
    int y = rand() % 2;
    int y2 = rand() % 2;
    int y3 = rand() % 20;
    if (y3 == 5)
        allsf->more++;
    if (allsf->buf[1][2]->pos.x <= -320 && y == 1
    && allsf->buf[1][5]->pos.x <= 1600 + allsf->more) {
        allsf->buf[1][2]->pos.x = 2100;
    }
    if (allsf->buf[1][5]->pos.x <= -320 && y2 == 1
    && allsf->buf[1][2]->pos.x <= 1600 + allsf->more) {
        allsf->buf[1][5]->pos.x = 2100;
    }
}

int loop(void)
{
    allsf_t *allsf = malloc(sizeof(allsf_t));
    initmain(allsf);
    sfRenderWindow_setMouseCursorVisible(allsf->window, sfTrue);
    sfRenderWindow_setFramerateLimit(allsf->window, 120);
    while (sfRenderWindow_isOpen(allsf->window)) {
        while (sfRenderWindow_pollEvent(allsf->window, &allsf->event)) {
            analyse_events(allsf->sfMouseButtonEvent, allsf);
        }
        randompos(allsf);
        setpos(allsf);
        setscale(allsf);
        settextrect(allsf);
        if (allsf->back == 1)
            move_rect6(allsf);
        draw(allsf);
    }
    destroyall(allsf);
    return EXIT_SUCCESS;
}

int main (int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        descri();
        return (0);
    }
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'i')) {
        loop();
        return (0);
    }
    if (ac == 2 && av[1] != NULL) {
        loop2(av[1]);
        return (0);
    }
    help();
    return (0);
}
