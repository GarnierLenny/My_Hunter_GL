/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_score
*/

#include "my.h"

int is_a_char_num(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

sfText *set_highscore_text(global_t *g, sfFont *font, char *buffer)
{
    font = sfFont_createFromFile(BG_font);
    sfText_setFont(g->score->highscore, font);
    sfText_setString(g->score->highscore, buffer);
    sfText_setPosition(g->score->highscore, v2f(1700, 50));
    sfText_setColor(g->score->highscore, sfYellow);
    sfText_setCharacterSize(g->score->highscore, 90);
    sfText_setOutlineColor(g->score->highscore, sfBlack);
    sfText_setScale(g->score->highscore, v2f(1, 1));
    sfText_setOutlineThickness(g->score->highscore, 2);
    return g->score->highscore;
}

sfText *init_highscore(global_t *g)
{
    sfFont *font;
    struct stat sb;
    char *buffer = NULL;
    int i = 0;

    font = sfFont_createFromFile(BG_font);
    g->score->highscore = sfText_create();
    sfText_setFont(g->score->highscore, font);
    g->score->fd = open("src/score/highscore", O_RDWR | O_TRUNC);
    stat("src/score/highscore", &sb);
    buffer = malloc(sizeof(char) * sb.st_size);
    read(g->score->fd, buffer, sb.st_size);
    for (; is_a_char_num(buffer[i]) == 1; i++);
    buffer[i] = '\0';
    set_highscore_text(g, font, buffer);
    write(g->score->fd, "0", 1);
    return g->score->highscore;
}

sfText *init_score(global_t *g)
{
    sfFont *font;

    g->score->score_text = sfText_create();
    font = sfFont_createFromFile(BG_font);
    sfText_setFont(g->score->score_text, font);
    sfText_setString(g->score->score_text, NULL);
    sfText_setColor(g->score->score_text, sfWhite);
    sfText_setOutlineColor(g->score->score_text, sfBlack);
    sfText_setOutlineThickness(g->score->score_text, 2);
    sfText_setScale(g->score->score_text, v2f(1, 1));
    sfText_setCharacterSize(g->score->score_text, 90);
    sfText_setPosition(g->score->score_text, v2f(1700, 160));
    init_highscore(g);
    return g->score->score_text;
}

global_t *get_scoreboard(global_t *g)
{
    int fd = open("src/score/scoreboard_names", O_RDWR);
    struct stat sb;
    char *buffer = NULL;
    int size = 0;

    stat("src/score/scoreboard_names", &sb);
    size = sb.st_size;
    buffer = malloc(sizeof(char) * size);
    read(fd, buffer, size);
    g->score->score_names = str_to_word_array_sep(buffer, '\n');
    fd = open("src/score/scoreboard_int", O_RDWR);
    stat("src/score/scoreboard_int", &sb);
    size = sb.st_size;
    buffer = malloc(sizeof(char) * size);
    read(fd, buffer, size);
    g->score->sb_int = str_to_word_array_sep(buffer, '\n');
    sfText_setString(g->score->highscore, g->score->sb_int[0]);
    return g;
}