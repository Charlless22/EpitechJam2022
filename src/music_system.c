/*
** EPITECH PROJECT, 2021
** EpitechJam2022
** File description:
** music_system.c
*/

#include "../include/my.h"

void music_system(game_t *game)
{
    game->music = sfMusic_createFromFile("assets/simpson.ogg");
    if (game->music) {
        sfMusic_play(game->music);
        sfMusic_setLoop(game->music, sfTrue);
    }
}