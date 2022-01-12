/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** text
*/

#include "my.h"

void createtext(allsf_t *allsf)
{
    allsf->stock[0][0] = create_text("picandsound/font.ttf",
    (sfVector2f) {800, 500}, "Volume set", (sfVector2f) {3, 3});
    allsf->stock[0][1] = create_text("picandsound/font.ttf",
    (sfVector2f) {0, 0}, "score :", (sfVector2f) {1.5, 1.5});
    allsf->stock[0][2] = create_text("picandsound/font.ttf",
    (sfVector2f) {100, 0}, nbrtostring(allsf->point), (sfVector2f) {1.5, 1.5});
    allsf->stock[0][3] = create_text("picandsound/font.ttf",
    (sfVector2f) {1500, 0}, "previous score :", (sfVector2f) {1.5, 1.5});
    allsf->stock[0][4] = create_text("picandsound/font.ttf",
    (sfVector2f) {1750, 0},
    nbrtostring(allsf->savescore), (sfVector2f) {1.5, 1.5});
}
