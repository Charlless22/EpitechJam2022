/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** bouton.c
*/

#include "../include/my.h"

void bouton_play_crunch(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 230) {
        if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 230) {
            sfSprite_setPosition(game->obj[4]->sprite, game->obj[4]->pose);
            sfRenderWindow_drawSprite(game->window, game->obj[4]->sprite, NULL);
            //sfSprite_move(game->obj[1]->sprite, (sfVector2f){2000, 0});
        }
    }
    if (x >= game->obj[2]->pose.x && x <= game->obj[2]->pose.x + 230) {
        if (y >= game->obj[2]->pose.y && y <= game->obj[2]->pose.y + 230) {
            sfSprite_setPosition(game->obj[5]->sprite, game->obj[5]->pose);
            sfRenderWindow_drawSprite(game->window, game->obj[5]->sprite, NULL);
        }
    }
    if (x >= game->obj[3]->pose.x && x <= game->obj[3]->pose.x + 230) {
        if (y >= game->obj[3]->pose.y && y <= game->obj[3]->pose.y + 230) {
            sfSprite_setPosition(game->obj[6]->sprite, game->obj[6]->pose);
            sfRenderWindow_drawSprite(game->window, game->obj[6]->sprite, NULL);
        }
    }
}

void click_button_music(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfMouse_isButtonPressed && game->musique == 0) {
        if (x >= game->obj[9]->pose.x && x <= game->obj[9]->pose.x + 92) {
            if (y >= game->obj[9]->pose.y && y <= game->obj[9]->pose.y + 90) {
                sfMusic_stop(game->music2);
                sfMusic_play(game->music);
                game->musique = 1;
                game->check_music = 0;
            }
        }
    }
    if (sfMouse_isButtonPressed && game->musique == 1) {
        if (x >= game->obj[9]->pose.x && x <= game->obj[9]->pose.x + 92) {
            if (y >= game->obj[9]->pose.y && y <= game->obj[9]->pose.y + 90) {
                sfMusic_stop(game->music);
                sfMusic_play(game->music2);
                game->musique = 0;
                game->check_music = 1;
            }
        }
    }
}

void button_musique(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[9]->pose.x && x <= game->obj[9]->pose.x + 92) {
        if (y >= game->obj[9]->pose.y && y <= game->obj[9]->pose.y + 90) {
            sfSprite_setPosition(game->obj[10]->sprite, game->obj[10]->pose);
            sfRenderWindow_drawSprite(game->window, game->obj[10]->sprite, NULL);
        }
    }
}

void leave_settings_button(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (game->event.type == sfEvtMouseButtonPressed && game->event.key.code == sfMouseLeft) {
        if (x >= game->obj[3]->pose.x && x <= game->obj[3]->pose.x + 230) {
            if (y >= game->obj[3]->pose.y && y <= game->obj[3]->pose.y + 230) {
                process_menu(game);
            }
        }
    }
}
