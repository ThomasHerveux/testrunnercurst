/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** gameobj
*/

#include "my.h"

struct game_object *create_object(const char *path_to_spritesheet ,
sfVector2f pos, sfIntRect rect, sfVector2f scale)
{
    game_object_t *game_object = malloc(sizeof(game_object_t));
    game_object->sp = sfSprite_create();
    game_object->texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    sfSprite_setTexture(game_object->sp, game_object->texture, sfTrue);
    game_object->pos = pos;
    game_object->scale = scale;
    game_object->rect = rect;
    return (game_object);
}
