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

void first_question(game_t *game)
{
    game->str = "Comment se prénomme la fille intello de la famille Simpson ?";
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

void second_question(game_t *game)
{
    game->str = "Comment se prénomme le farceur de la famille Simpson ?";
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

void third_question(game_t *game)
{
    game->str = "Comment se prénomme le père de la famille Simpson ?";
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

void fourth_question(game_t *game)
{
    game->str = "Comment se prénomme la mère de la famille Simpson ?";
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

void fifth_question(game_t *game)
{
    game->str = "Comment se prénomme le bébé de la famille Simpson ?";
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

void sixth_question(game_t *game)
{
    game->str = "Quel est le prénom de Bart ?";
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

void seventh_question(game_t *game)
{
    game->str = "Quel est le prénom complet de Maggie ?";
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

void eighth_question(game_t *game)
{
    game->str = "Qui est le meilleur ami de Bart ?";
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

void ninth_question(game_t *game)
{
    game->str = "Où travaille Homer ?";
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

void tenth_question(game_t *game)
{
    game->str = " Marge était elle flic ?";
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
