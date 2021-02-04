/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** malloc_spr
*/

#include "my.h"

global_t *malloc_spr_2(global_t *g)
{
    g->exp[2] = malloc(sizeof(exp_t));
    g->hearts = malloc(sizeof(spr_t));
    g->go = malloc(sizeof(spr_t));
    g->retry = malloc(sizeof(spr_t));
    g->exit = malloc(sizeof(spr_t));
    g->sb_button = malloc(sizeof(spr_t));
    g->score = malloc(sizeof(score_t));
    g->sb = malloc(sizeof(scoreboard_t));
    g->sb_exit = malloc(sizeof(spr_t));
    g->audio = malloc(sizeof(music_t));
    return g;
}

global_t *malloc_spr(global_t *g)
{
    g->sky = malloc(sizeof(spr_t));
    g->rock_1 = malloc(sizeof(spr_t));
    g->rock_2 = malloc(sizeof(spr_t));
    g->ground = malloc(sizeof(spr_t));
    g->clouds[0] = malloc(sizeof(spr_t));
    g->clouds[1] = malloc(sizeof(spr_t));
    g->clouds[2] = malloc(sizeof(spr_t));
    g->mole[0] = malloc(sizeof(mole_t));
    g->mole[1] = malloc(sizeof(mole_t));
    g->mole[2] = malloc(sizeof(mole_t));
    g->mouse = malloc(sizeof(mouse_t));
    g->exp[0] = malloc(sizeof(exp_t));
    g->exp[1] = malloc(sizeof(exp_t));
    return g;
}