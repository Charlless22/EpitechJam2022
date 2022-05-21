/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** text.c
*/

#include "../include/my.h"

void text(game_t *game)
{
    game->str = "EPITECH JAM 2022";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfYellow);
    game->position.x = 720;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}
