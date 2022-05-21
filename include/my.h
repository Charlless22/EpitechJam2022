/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #define OBJECT 100
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
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

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
    sfMusic *music2;
    sfSoundBuffer *buffer;
    sfSound *sound;
    float seconds;
    object_t *obj[OBJECT];
    sfText *text;
    sfFont *font;
    sfVector2f position;
    char *str;
    int question;
    int rep;
} game_t;

object_t *create_object(sfIntRect rect, char *path, int x, int y);
void create_sound(game_t *game, char *son);
void process_menu(game_t *game);
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
void is_button(game_t *game);
void process_game(game_t *game);
void menu_events(game_t *game);
void move_sprite(game_t *game, int a, int x, int y);
void first_question(game_t *game);
void second_question(game_t *game);
void third_question(game_t *game);
void fourth_question(game_t *game);
void fifth_question(game_t *game);
void sixth_question(game_t *game);
void seventh_question(game_t *game);
void eighth_question(game_t *game);
void ninth_question(game_t *game);
void tenth_question(game_t *game);
void process_settings(game_t *game);
void click_button_music(game_t *game);
#endif