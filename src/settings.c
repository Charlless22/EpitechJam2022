/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_settings(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window)) {
        draw_object(game, 9);
        button_musique(game);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                settings_events(game);
        }
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_object(game, 9);
    return;
}