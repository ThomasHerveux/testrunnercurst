/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** main
*/

#include "my.h"

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
        setpos(allsf);
        setscale(allsf);
        settextrect(allsf);
        draw(allsf);
    }
    sfSound_destroy(allsf->sound);
    sfSoundBuffer_destroy(allsf->soundbuffer);
    free(allsf);
    return EXIT_SUCCESS;
}

int main (int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        descri();
        return (0);
    }
    loop();
    return (0);
}
