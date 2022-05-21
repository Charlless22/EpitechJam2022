/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_settings(game_t *game)
{
    game->obj[8] = create_object((sfIntRect) {0, 0, 1920, 1080},"assets/torreto.jpeg", 0, 0);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                game_events(game);
        }
        draw_object(game, 8);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_object(game, 8);
    return;
}