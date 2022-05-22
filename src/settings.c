/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_settings(game_t *game)
{
    sfVector2f scale_donut = {0.3, 0.3};
    sfVector2f scale_torreto = {1.5, 1.5};

    game->obj[3]->pose.x = 0;
    game->obj[3]->pose.y = 860;
    sfSprite_setScale(game->obj[3]->sprite, scale_donut);
    sfSprite_setScale(game->obj[11]->sprite, scale_torreto);

    while (sfRenderWindow_isOpen(game->window)) {
        draw_object(game, 11);
        draw_object(game, 9);
        draw_object(game, 3);
        button_musique(game);
        leave_settings_button(game);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                settings_events(game);
        }
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_object(game, 9);
    destroy_object(game, 3);
    destroy_object(game, 11);
    return;
}