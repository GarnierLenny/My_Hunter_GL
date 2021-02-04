/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** cehck_reset_exp
*/

#include "my.h"

void if_mole_dead(global_t *g)
{
    for (int i = 0; i <= 2; i++) {
        if (g->mole[i]->state == dead && g->mole[0]->spawn == sfTrue) {
            g->exp[i]->rect.left = 0;
            g->exp[i]->pos =
            v2f(g->mole[i]->pos.x - 200, g->mole[i]->pos.y - 300);
            sfSprite_setPosition(g->exp[i]->spr, g->exp[i]->pos);
        }
    }
}

void check_reset_exp(global_t *g)
{
    for (int i = 0; i <= 2; i++) {
        if (g->exp[i]->count_exp == 7) {
            if (g->exp[i]->rect.left >= 900) {
                sfSprite_setPosition(g->exp[i]->spr, v2f(-500, -500));
                g->exp[i]->state = not_launched;
            }
            move_sprites_left_exp(g->exp[i], 180);
            g->exp[i]->count_exp = 0;
        }
    }
}