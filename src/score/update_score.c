/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** update_score
*/

#include "my.h"

sfText *update_score(global_t *g)
{
    sfText_setString(g->score->score_text, int_to_str(g->score->score));
    if (g->score->score > gnb(sfText_getString(g->score->highscore))) {
        sfText_setString(g->score->highscore, int_to_str(g->score->score));
        sfText_setColor(g->score->highscore, sfGreen);
    }
    return g->score->score_text;
}