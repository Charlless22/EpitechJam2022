/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** destroy.c
*/

#include "../include/my.h"

void destroy_game(game_t *game)
{
    sfMusic_destroy(game->music);
    sfMusic_destroy(game->music2);
    sfClock_destroy(game->clock);
    sfRenderWindow_destroy(game->window);
}

void destroy_object(game_t *game, int x)
{
    sfSprite_destroy(game->obj[x]->sprite);
    sfTexture_destroy(game->obj[x]->texture);
}

void destroy_all(game_t *game, int x)
{   for (int i = 0; i <= x; i++) {
        destroy_object(game, i);
    }
}
