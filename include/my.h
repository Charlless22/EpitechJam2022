/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #define OBJECT 10
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

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    sfVector2f pose;
    sfMusic *musique;
    sfSoundBuffer *buffer;
    sfSound *sound;
    float seconds;
    object_t *obj[OBJECT];
} game_t;

typedef struct object_s {
    char *name;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    float velocity;
    sfVector2f pose;
} object_t;

object_t *create_object(sfIntRect rect, char *path, int x, int y);
void create_sound(game_t *game, char *son);
#endif