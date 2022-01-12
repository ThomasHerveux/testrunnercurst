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

struct game_text *create_text(const char *path_to_text ,
sfVector2f pos, char *sentence, sfVector2f scale)
{
    game_text_t *game_text = malloc(sizeof(game_text_t));
    game_text->text = sfText_create();
    game_text->font = sfFont_createFromFile(path_to_text);
    sfText_setFont(game_text->text, game_text->font);
    sfText_setString(game_text->text, sentence);
    sfText_setPosition(game_text->text, pos);
    sfText_setScale(game_text->text, scale);
    return (game_text);
}

struct game_sound *create_sound(const char *path_to_sound ,
int volume)
{
    game_sound_t *game_sound = malloc(sizeof(game_sound_t));
    game_sound->sound = sfSound_create();
    game_sound->soundbuffer =
    sfSoundBuffer_createFromFile(path_to_sound);
    sfSound_setBuffer(game_sound->sound, game_sound->soundbuffer);
    sfSound_setVolume(game_sound->sound, volume);
    return (game_sound);
}
