/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** main
*/

#include "../include/my.h"

game_t *create_game(int width, int height, char *name)
{
    game_t *game = malloc(sizeof(game_t));
    sfVideoMode mode = {width, height, 32};
    game->window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    game->clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(game->window, 60);
    return game;
}

int main(int argc, char **argv)
{
    game_t *game = create_game(1920, 1080, "JAM_QUIZZ");
    if (argc > 2)
        return 84;
    process_game(game);
    destroy_game(game);
    return 0;
}
