/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init
*/

#include "../include/my.h"

object_t *create_object(sfIntRect rect, char *path, int x, int y)
{
    object_t *object = malloc(sizeof(object_t));

    object->texture = sfTexture_createFromFile(path, NULL);
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    object->rect = rect;
    sfSprite_setTextureRect(object->sprite, object->rect);
    object->pose.x = x;
    object->pose.y = y;
    sfSprite_setPosition(object->sprite,object->pose);
    return object;
}

void create_sound(game_t *game, char *son)
{
    game->buffer = sfSoundBuffer_createFromFile(son);
    game->sound = sfSound_create();
    sfSound_setBuffer(game->sound, game->buffer);
    sfSound_play(game->sound);
}