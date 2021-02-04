/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** is_score_bigger
*/

#include "my.h"

void is_score_bigger(global_t *g)
{
    int i = 0;
    int fd = open("src/score/player_name", O_RDWR);
    char *buffer = malloc(sizeof(char) * 5);

    for (; g->score->sb_int[i] != NULL; i++)
        if (gnb(g->score->sb_int[i]) < g->score->score)
            break;
    g->score->sb_int = cpy_ss_plus(g->score->sb_int, i,
        int_to_str(g->score->score));
    read(fd, buffer, 3);
    g->score->score_names = cpy_ss_plus(g->score->score_names, i,
        buffer);
}