/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** replace_high_score
*/

#include "my.h"

void write_rep_names(global_t *g)
{
    int fd = open("src/score/scoreboard_int", O_RDWR);

    for (int i = 0; i != 3; i++) {
        write(fd, g->score->sb_int[i], my_strlen(g->score->sb_int[i]));
        write(fd, "\n", 1);
    }
    fd = open("src/score/scoreboard_names", O_RDWR);
    for (int i = 0; i != 3; i++) {
        write(fd, g->score->score_names[i], 3);
        write(fd, "\n", 1);
    }
}

void replace_high_score(global_t *g)
{
    if (g->score->score == 0)
        return;
    is_score_bigger(g);
    if (g->score->score == gnb(sfText_getString(g->score->highscore))) {
        g->score->fd = open("src/score/highscore", O_RDWR);
        write(g->score->fd, sfText_getString(g->score->highscore),
            my_strlen(sfText_getString(g->score->highscore)));
        sfText_setColor(g->score->highscore, sfYellow);
        g->score->score = 0;
    } else {
        sfText_setColor(g->score->highscore, sfYellow);
        g->score->score = 0;
    }
    write_rep_names(g);
}