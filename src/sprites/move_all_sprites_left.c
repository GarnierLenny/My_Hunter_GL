/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** mole_all_spites_left
*/

#include "my.h"

void move_all_sprites_left(global_t *g)
{
    for (int i = 0; i <= 2; i++)
        g->exp[i]->count_exp += 1;
    move_sprites_left(g->rock_1, 1);
    move_sprites_left(g->rock_2, 2);
    move_sprites_left(g->ground, 4);
    move_sprites_left(g->clouds[0], 1);
    move_sprites_left(g->clouds[1], 3);
    move_sprites_left(g->clouds[2], 4);
    if_mole_dead(g);
    check_reset_exp(g);
}