/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** events.c
*/

#include "../include/my.h"

void menu_events(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtKeyPressed && game->event.key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed && game->event.key.code == sfMouseLeft) {
        is_button(game);
    }
}

void game_events(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtKeyPressed
    && game->event.key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed
    && game->event.key.code == sfMouseLeft)
        click_button_music(game);
}