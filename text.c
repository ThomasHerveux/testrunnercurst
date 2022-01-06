/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** text
*/

#include "my.h"

void createtext(allsf_t *allsf)
{
    allsf->soundset = sfText_create();
    allsf->font = sfFont_createFromFile("picandsound/font.ttf");
    sfText_setFont(allsf->soundset, allsf->font);
    sfText_setString(allsf->soundset, "Volume set");
    sfText_setPosition(allsf->soundset, (sfVector2f) {800, 500});
    sfText_setScale(allsf->soundset, (sfVector2f) {3, 3});
    allsf->score = sfText_create();
    allsf->fscore = sfFont_createFromFile("picandsound/font.ttf");
    sfText_setFont(allsf->score, allsf->fscore);
    sfText_setString(allsf->score, "score :");
    sfText_setPosition(allsf->score, (sfVector2f) {0, 0});
    sfText_setScale(allsf->score, (sfVector2f) {1.5, 1.5});
    allsf->nbscore = sfText_create();
    allsf->fnbscore = sfFont_createFromFile("picandsound/font.ttf");
    sfText_setFont(allsf->nbscore, allsf->fnbscore);
    sfText_setPosition(allsf->nbscore, (sfVector2f) {100, 0});
    sfText_setScale(allsf->nbscore, (sfVector2f) {1.5, 1.5});
}
