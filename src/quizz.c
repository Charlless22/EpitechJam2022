/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_menu(game_t *game)
{
    init_game(game);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                game_events(game);
        }
        draw_all_object(game, 3);
        text(game);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_all(game, 3);
    return;
}
