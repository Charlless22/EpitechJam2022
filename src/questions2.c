/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** question2.c
*/

#include "../include/my.h"

void is_button_6(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 256) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 65) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                sleep(2);
        }
    }
    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 256) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 65) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                sleep(2);
        }
    }
    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 256) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 65) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                sleep(2);
        }
    }
}

void is_button_7(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfMouse_isButtonPressed) {
        if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 256) {
            if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 65) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
            }
        }
    }
}

void is_button_8(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfMouse_isButtonPressed) {
        if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 256) {
            if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 65) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
            }
        }
    }
}

void is_button_9(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfMouse_isButtonPressed) {
        if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 256) {
            if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 65) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
            }
        }
    }
}

void is_button_10(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (sfMouse_isButtonPressed) {
        if (x >= game->obj[1]->pose.x && x <= game->obj[1]->pose.x + 256) {
            if (y >= game->obj[1]->pose.y && y <= game->obj[1]->pose.y + 65) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
            }
        }
    }
}
