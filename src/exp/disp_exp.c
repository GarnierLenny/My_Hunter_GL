/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** disp_exp
*/

#include "my.h"

void disp_exp(global_t *g)
{
    if (g->mole[0]->state == dead || g->exp[0]->state == launched) {
        g->exp[0]->state = launched;
        sfRenderWindow_drawSprite(g->window, g->exp[0]->spr, NULL);
    }
    if (g->mole[1]->state == dead || g->exp[1]->state == launched) {
        sfRenderWindow_drawSprite(g->window, g->exp[1]->spr, NULL);
        g->exp[1]->state = launched;
    }
    if (g->mole[2]->state == dead || g->exp[2]->state == launched) {
        sfRenderWindow_drawSprite(g->window, g->exp[2]->spr, NULL);
        g->exp[2]->state = launched;
    }
}