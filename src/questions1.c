/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** question1.c
*/

#include "../include/my.h"

void is_button_1(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            // sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            // sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
        }
    }
}

void is_button_2(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            // sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            // sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
        }
    }
}

void is_button_3(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            // sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            // sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
        }
    }
}

void is_button_4(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            // sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            // sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
        }
    }
}

void is_button_5(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            // sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            // sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
        }
    }
}
