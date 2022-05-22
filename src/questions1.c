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

    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 1920) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 1080) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 1920) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 1920) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
}

void is_button_2(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 1920) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 1080) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 1920) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 1920) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
}

void is_button_3(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 1920) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 1080) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 1920) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 1920) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
}

void is_button_4(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 1920) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 1080) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 1920) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 1920) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
}

void is_button_5(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->window).x;
    int y = sfMouse_getPositionRenderWindow(game->window).y;

    if (x >= game->obj[11]->pose.x && x <= game->obj[11]->pose.x + 1920) {
        if (y >= game->obj[11]->pose.y && y <= game->obj[11]->pose.y + 1080) {
                game->note += 1;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[12]->pose.x && x <= game->obj[12]->pose.x + 1920) {
        if (y >= game->obj[12]->pose.y && y <= game->obj[12]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
    if (x >= game->obj[13]->pose.x && x <= game->obj[13]->pose.x + 1920) {
        if (y >= game->obj[13]->pose.y && y <= game->obj[13]->pose.y + 1080) {
                game->note += 0;
                game->question -= 1;
                printf("note = %d\n", game->note);
                printf("question = %d\n", game->question);
        }
    }
}
