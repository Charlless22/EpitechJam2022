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

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 512) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 512) {
            
            process_game(game);
        }
    }

    if (x >= game->obj[2]->pose.x && x <= game->obj[2]->pose.x + 230) {
        if (y >= game->obj[2]->pose.y && y <= game->obj[2]->pose.y + 230) {
            //destroy_all(game, 6);
            //process_settings(game);
        }
    }

    if (x >= game->obj[3]->pose.x && x <= game->obj[3]->pose.x + 512) {
        if (y >= game->obj[3]->pose.y && y <= game->obj[3]->pose.y + 512) {
            sfRenderWindow_close(game->window);
        }
    }
}