/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_game(game_t *game)
{
    game->obj[7] = create_object((sfIntRect) {0, 0, 1920, 1080},"assets/game.png", 0, 0);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                game_events(game);
        }
        draw_object(game, 7);
        first_question(game);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_object(game, 7);
    return;
}