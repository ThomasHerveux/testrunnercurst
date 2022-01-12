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
    #include <stdio.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>

struct game_object {
    sfIntRect rect;
    sfSprite *sp;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
};
typedef struct game_object game_object_t;

struct game_text {
    sfText *text;
    sfFont *font;
    sfVector2f pos;
    sfVector2f scale;
};
typedef struct game_text game_text_t;

struct game_sound {
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
};
typedef struct game_sound game_sound_t;

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
    sfClock *clock6;
    sfTime time6;
    sfClock *clock7;
    sfTime time7;
    sfClock *clock8;
    sfTime time8;
    float seconds;
    int count;
    int speed;
    int death;
    int back;
    int skip;
    int vol;
    int point;
    int dis;
    int savescore;
    int counter;
    int i;
    int fd;
    int help;
    char *buffer;
    int win;
    int worm;
    int drake;
    int more;
    game_object_t *buf[20][20];
    game_text_t *stock[20][20];
    game_sound_t *storage[20][20];
};
typedef struct allsf allsf_t;

struct game_object *create_object(const char *path_to_spritesheet ,
sfVector2f pos, sfIntRect rect, sfVector2f scale);
struct game_text *create_text(const char *path_to_text ,
sfVector2f pos, char *sentence, sfVector2f scale);
struct game_sound *create_sound(const char *path_to_sound ,
int volume);
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
void help(void);
void createsound(allsf_t *allsf);
void move_rect4(allsf_t *allsf);
int loop2(char *map);
void move_rect5(allsf_t *allsf);
void destroyall(allsf_t *allsf);
void extdraw2(allsf_t *allsf);
void anal_ev(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf);
void anal_ev2(sfMouseButtonEvent_t sfMouseButtonEvent, allsf_t *allsf);
void move_rect6(allsf_t *allsf);
void extenddraw(allsf_t *allsf);
