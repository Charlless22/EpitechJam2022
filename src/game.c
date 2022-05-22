/*
** EPITECH PROJECT, 2022
** JAM_QUIZZ
** File description:
** JAM_QUIZZ
*/

#include "../include/my.h"

void quizz(game_t *game)
{
    if (game->question == 1) {
        tenth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_10(game);
    }
    if (game->question == 2) {
        ninth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_9(game);
    }
    if (game->question == 3) {
        eighth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_8(game);
    }
    if (game->question == 4) {
        seventh_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_7(game);
    }
    if (game->question == 5) {
        sixth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_6(game);
    }
    if (game->question == 6) {
        fifth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_5(game);
    }
    if (game->question == 7) {
        fourth_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_4(game);
    }
    if (game->question == 8) {
        third_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_3(game);
    }
    if (game->question == 9) {
        second_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_2(game);
    }
    if (game->question == 10) {
        first_question(game);
        if (game->event.type == sfEvtMouseButtonPressed
        && game->event.key.code == sfMouseLeft)
            is_button_1(game);
    }
}

void process_game(game_t *game)
{
    game->obj[7] = create_object((sfIntRect) {0, 0, 1920, 1080},"assets/game.png", 0, 0);
    game->obj[11] = create_object((sfIntRect) {0, 0, 1920, 1080}, "assets/boutons.png", 150, 200);
    game->obj[12] = create_object((sfIntRect) {0, 0, 1920, 1080}, "assets/boutons.png", 600, 200);
    game->obj[13] = create_object((sfIntRect) {0, 0, 1920, 1080}, "assets/boutons.png", 1100, 200);
    sfSprite_setScale(game->obj[11]->sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setScale(game->obj[12]->sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setScale(game->obj[13]->sprite, (sfVector2f) {0.35, 0.35});
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
                game_events(game);
        }
        draw_object(game, 7);
        draw_object(game, 11);
        draw_object(game, 12);
        draw_object(game, 13);
;        quizz(game);
        sfRenderWindow_display(game->window);
        sfRenderWindow_clear(game->window, sfBlack);
    }
    destroy_object(game, 7);
    return;
}