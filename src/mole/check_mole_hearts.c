/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** check_mole_hearts
*/

#include "my.h"

void check_ev_mole_spawn(global_t *g)
{
    if (g->mole[0]->spawn == sfTrue) {
        if (g->mole[0]->state == dead)
            respawn_mole(g->mole[0]);
        if (g->mole[1]->state == dead)
            respawn_mole(g->mole[1]);
        if (g->mole[2]->state == dead)
            respawn_mole(g->mole[2]);
    }
}

void check_reduce_health(global_t *g)
{
    g->hearts->rect.top += 31;
    if (g->hearts->rect.top >= 90)
        set_spawn_bool(g, sfFalse);
    sfSprite_setTextureRect(g->hearts->spr, g->hearts->rect);
}