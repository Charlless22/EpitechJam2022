/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void process_game(game_t *game)
{
    game->obj[0] = create_object((sfIntRect) {0, 0, 3840, 2160},"assets/simpsons.jpg", 0, 0);
    game->obj[1] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_play.png", 0, 0);
    game->obj[2] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_quit.png", 0, 0);
    game->obj[3] = create_object((sfIntRect) {0, 0, 512, 512},"assets/Button_settings.png", 0, 0);
}