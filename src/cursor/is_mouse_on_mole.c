/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** is_mouse_on_mole
*/

#include "my.h"

int is_mouse_on_mole(global_t *g)
{
    sfEvent event;
    int i = 0;

    sfRenderWindow_pollEvent(g->window, &event);
    for (; i <= 2; i++) {
        if (sqrt((pow(((g->mole[i]->pos.x + 80) - g->mouse->pos.x) , 2) +
            (pow(((g->mole[i]->pos.y + 80) - g->mouse->pos.y), 2)))) <= 70
            && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            g->game_state = game_over;
            g->mole[i]->state = dead;
            g->score->score += 1;
            return i;
        }
    }
    return 0;
}