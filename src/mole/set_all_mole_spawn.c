/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** set_all_mole_spawn
*/

#include "my.h"

void set_spawn_bool(global_t *g, sfBool spawn)
{
    g->mole[0]->spawn = spawn;
    g->mole[1]->spawn = spawn;
    g->mole[2]->spawn = spawn;
}

int set_all_mole_spawn(global_t *g, state_t state)
{
    g->mole[0]->state = state;
    g->mole[1]->state = state;
    g->mole[2]->state = state;
    return 0;
}