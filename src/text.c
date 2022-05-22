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
    game->str = "Comment se nomme la fille intello de la famille Simpson ?\n\n\n\n\t\tApu\t\t\t\tLisa\t\t\t\tMarge";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void second_question(game_t *game)
{
    game->str = "Comment se nomme le farceur de la famille Simpson ?\n\n\n\n\t\tKenny\t\t\tJawad\t\t\tBart";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void third_question(game_t *game)
{
    game->str = "Comment se nomme le pere de la famille Simpson ?\n\n\n\n\t\tSamuel\t\t\tPapacito\t\t\tHomer";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void fourth_question(game_t *game)
{
    game->str = "Comment se nomme la mere de la famille Simpson ?\n\n\n\n\t\tMarge\t\t\tFatima\t\t\tNasdas";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void fifth_question(game_t *game)
{
    game->str = "Comment se nomme le bebe de la famille Simpson ?\n\n\n\n\t\tMaggy\t\t\tEricLeZ\t\t\tIshowSpeed";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void sixth_question(game_t *game)
{
    game->str = "Quel est le nom de Bart ?\n\n\n\n\t\tNaruto\t\t\tJhon\t\t\tBartholomew";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void seventh_question(game_t *game)
{
    game->str = "Quel est le nom complet de Maggie ?\n\n\n\n\t\tMargaret Eve\t\t\tPablo\t\t\tZizou";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void eighth_question(game_t *game)
{
    game->str = "Qui est le meilleur ami de Bart ?\n\n\n\n\t\tMilhouse\t\t\tToulouse\t\t\tPedro";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void ninth_question(game_t *game)
{
    game->str = "Ou travaille Homer ?\n\n\n\n\t\tcentrale nucléaire de Springfield\t\t\tCentrale nuck de call of duty\t\t\tPole emploi";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}

void tenth_question(game_t *game)
{
    game->str = " Marge etait elle flic ?\n\n\n\n\t\tOui\t\t\tNon\t\t\tla place";
    game->font = sfFont_createFromFile("./assets/homer.ttf");
    game->text = sfText_create();
    sfText_setCharacterSize(game->text, 75);
    sfText_setString(game->text, game->str);
    sfText_setFont(game->text, game->font);
    sfText_setColor(game->text, sfBlack);
    game->position.x = 200;
    game->position.y = 0;
    sfText_setPosition(game->text, game->position);
    sfRenderWindow_drawText(game->window, game->text, NULL);
}
