/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init
*/

#include "../include/my.h"

void init_game(game_t *game)
{
    sfVector2f scale = {0.5, 0.5};
    sfVector2f scale2 = {1.3, 1.3};
    music_system(game);
    game->obj[0] = create_object((sfIntRect) {0, 0, 1920, 1080},"assets/s.png", 0, 0);
    game->obj[1] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_play.png", 150, 400);
    sfSprite_setScale(game->obj[1]->sprite, scale);
    game->obj[2] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_settings.png", 1400, 400);
    sfSprite_setScale(game->obj[2]->sprite, scale);
    game->obj[3] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_quit.png", 1500, 400);
    sfSprite_setScale(game->obj[3]->sprite, scale);
    game->obj[4] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_play_crunch.png", 150, 400);
    sfSprite_setScale(game->obj[4]->sprite, scale);
    game->obj[5] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_settings_crunch.png", 1400, 400);
    sfSprite_setScale(game->obj[5]->sprite, scale);
    game->obj[6] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_quit_crunch.png", 1400, 700);
    sfSprite_setScale(game->obj[6]->sprite, scale);
}

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