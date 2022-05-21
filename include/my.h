/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #define OBJECT 7
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>

typedef struct object_s {
    char *name;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    float velocity;
    sfVector2f pose;
} object_t;

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    sfVector2f pose;
    sfMusic *music;
    sfSoundBuffer *buffer;
    sfSound *sound;
    float seconds;
    object_t *obj[OBJECT];
    sfText *text;
    sfFont *font;
    sfVector2f position;
    char *str;
} game_t;

object_t *create_object(sfIntRect rect, char *path, int x, int y);
void create_sound(game_t *game, char *son);
void process_game(game_t *game);
void destroy_game(game_t *game);
void draw_object(game_t *game, int x);
void draw_all_object(game_t *game, int x);
void destroy_object(game_t *game, int x);
void destroy_all(game_t *game, int x);
void game_events(game_t *game);
void init_game(game_t *game);
void music_system(game_t *game);
void bouton_play_crunch(game_t *game);
void text(game_t *game);
#endif