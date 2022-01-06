/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my.h
*/

#pragma once

    #include <SFML/System.h>
    #include <SFML/Audio.h>

    #include <SFML/System.h>

    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <SFML/System/Time.h>
    #include <stddef.h>

    #include <SFML/Window.h>

    #include <stdlib.h>
    #include <time.h>
    #include <unistd.h>

struct game_object {
    sfIntRect rect;
    sfSprite *sp;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
};
typedef struct game_object game_object_t;

struct sfMouseButtonEvent {
    sfEventType type;
    sfMouseButton button;
    int x;
    int y;
};
typedef struct sfMouseButtonEvent sfMouseButtonEvent_t;

struct sfKeyEvent {
    sfEventType type;
    sfKeyCode code;
    sfBool Echap;
};
typedef struct sfKeyEvent sfKeyEvent_t;

struct allsf {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfMouseButtonEvent_t sfMouseButtonEvent;
    sfClock *clock;
    sfTime time;
    sfClock *clock2;
    sfTime time2;
    sfClock *clock3;
    sfTime time3;
    sfClock *clock4;
    sfTime time4;
    sfClock *clock5;
    sfTime time5;
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
    sfText *soundset;
    sfFont *font;
    sfText *score;
    sfFont *fscore;
    sfText *nbscore;
    sfFont *fnbscore;
    float seconds;
    int count;
    int speed;
    int death;
    int back;
    int skip;
    int vol;
    int point;
    game_object_t *buf[20][20];
};
typedef struct allsf allsf_t;

struct game_object *create_object(const char *path_to_spritesheet ,
sfVector2f pos, sfIntRect rect, sfVector2f scale);
void analyse_events(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf);
void initmain(allsf_t *allsf);
void draw(allsf_t *allsf);
void setscale(allsf_t *allsf);
void setpos(allsf_t *allsf);
void settextrect(allsf_t *allsf);
void move_rect(allsf_t *allsf);
void move_rect2(allsf_t *allsf);
void jump(allsf_t *allsf);
void music(allsf_t *allsf);
void killperso(allsf_t *allsf);
void death(allsf_t *allsf);
void move_rect3(allsf_t *allsf);
void createtext(allsf_t *allsf);
void createsprite(allsf_t *allsf);
void descri(void);
char *my_revstr(char *str);
char *nbrtostring(int nb);
int my_strlen(char const *str);
