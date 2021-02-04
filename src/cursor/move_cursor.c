/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** move_cursor
*/

#include "my.h"

void move_mouse(global_t *g)
{
    g->mouse->pos.y = sfMouse_getPositionRenderWindow(g->window).y;
    g->mouse->pos.x = sfMouse_getPositionRenderWindow(g->window).x;
    sfSprite_setPosition(g->mouse->spr,
    v2f(g->mouse->pos.x - 77, g->mouse->pos.y - 77));
}