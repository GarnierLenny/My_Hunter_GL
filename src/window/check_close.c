/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** check_close
*/

#include "my.h"

void check_close(global_t *g, sfEvent evt)
{
    sfRenderWindow_pollEvent(g->window, &evt);
    if (evt.key.code == sfKeySpace)
        sfRenderWindow_close(g->window);
}