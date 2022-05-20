/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** events.c
*/

#include "../include/my.h"

void events(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtKeyPressed
    && game->event.key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
}