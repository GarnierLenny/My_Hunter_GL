/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_all
*/

#include "my.h"

global_t *init_sub_s_2(global_t *g)
{
    g->hearts = NULL;
    g->go = NULL;
    g->retry = NULL;
    g->exit = NULL;
    g->sb_button = NULL;
    g->sb_exit = NULL;
    g->sb = NULL;
    g->score = NULL;
    g->audio = NULL;
    return g;
}

global_t *init_sub_s(global_t *g)
{
    g->sky = NULL;
    g->rock_1 = NULL;
    g->rock_2 = NULL;
    g->ground = NULL;
    g->clouds[0] = NULL;
    g->clouds[1] = NULL;
    g->clouds[2] = NULL;
    g->mouse = NULL;
    g->mole[0] = NULL;
    g->mole[1] = NULL;
    g->mole[2] = NULL;
    g->exp[0] = NULL;
    g->exp[1] = NULL;
    g->exp[2] = NULL;
    return g;
}

global_t *init_all(global_t *g)
{
    g = malloc(sizeof(global_t));
    g = init_sub_s(g);
    g = init_sub_s_2(g);
    g = malloc_spr(g);
    g = malloc_spr_2(g);
    g->mole[0]->spawn = sfTrue;
    g->mole[1]->spawn = sfTrue;
    g->mole[2]->spawn = sfTrue;
    g->game_state = game_on;
    g->count_ret = 0;
    g->score->score = 0;
    g->score->fd = 0;
    init_window(g);
    init_sprites(g);
    init_score(g);
    get_scoreboard(g);
    init_music(g);
    return g;
}