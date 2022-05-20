/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_game(game_t *game)
{
    sfVector2f scale = {0.5, 0.5};
    sfVector2f scale2 = {0.3, 0.3};

    game->obj[0] = create_object((sfIntRect) {0, 0, 3840, 2160},"assets/simpson.jpg", 0, 0);
    sfSprite_setScale(game->obj[0]->sprite, scale);
    game->obj[1] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_play.png", 250, 0);
    sfSprite_setScale(game->obj[1]->sprite, scale);
    game->obj[2] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_quit.png", 250, 300);
    sfSprite_setScale(game->obj[2]->sprite, scale);
    game->obj[3] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_settings.png", 250, 600);
    sfSprite_setScale(game->obj[3]->sprite, scale);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                events(game);
        }
        draw_object(game, 0);
        draw_object(game, 1);
        draw_object(game, 2);
        draw_object(game, 3);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_all(game, 3);
    return;
}
