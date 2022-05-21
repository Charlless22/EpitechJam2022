/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** is_button
*/

#include "../include/my.h"

void is_button(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[3]->pose.x && x <= game->obj[3]->pose.x + 512) {
        if (y >= game->obj[3]->pose.y && y <= game->obj[3]->pose.y + 512) {
            sfRenderWindow_close(game->window);
        }
    }
}