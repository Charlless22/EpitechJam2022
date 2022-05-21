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
        draw_all_object(game, 3);
        bouton_play_crunch(game);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                menu_events(game);
        }
        text(game);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_all(game, 3);
    return;
}
