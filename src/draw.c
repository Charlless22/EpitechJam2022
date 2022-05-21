/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** draw.c
*/

#include "../include/my.h"

void draw_object(game_t *game, int x)
{
    sfSprite_setPosition(game->obj[x]->sprite, game->obj[x]->pose);
    sfRenderWindow_drawSprite(game->window, game->obj[x]->sprite, NULL);
}

void draw_all_object(game_t *game, int x)
{
    for (int i = 0; i <= x; i++) {
        sfRenderWindow_drawSprite(game->window, game->obj[i]->sprite, NULL);
    }
}

void move_sprite(game_t *game, int a, int x, int y)
{
    sfSprite_move(game->obj[a]->sprite, (sfVector2f){x, y});
}
