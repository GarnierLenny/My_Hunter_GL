/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** is_mouse_on_retry
*/

#include "my.h"

int is_mouse_on_exit(global_t *g)
{
    float xm = g->mouse->pos.x;
    float ym = g->mouse->pos.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(g->exit->spr);
    sfEvent event;

    if (g->game_state != game_over)
        return 0;
    sfRenderWindow_pollEvent(g->window, &event);
    if (sfFloatRect_contains(&rect, xm, ym) == sfTrue &&
        g->mole[0]->spawn == sfFalse && sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(g->window);
    }
    return 0;
}

int is_mouse_on_retry(global_t *g)
{
    float xm = g->mouse->pos.x;
    float ym = g->mouse->pos.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(g->retry->spr);
    sfEvent event;

    sfRenderWindow_pollEvent(g->window, &event);
    if (g->mole[0]->spawn == sfFalse)
        replace_high_score(g);
    if (sfFloatRect_contains(&rect, xm, ym) == sfTrue &&
        g->mole[0]->spawn == sfFalse && sfMouse_isButtonPressed(sfMouseLeft)) {
        g->mole[0]->spawn = sfTrue;
        g->mole[1]->spawn = sfTrue;
        g->mole[2]->spawn = sfTrue;
        g->mole[0]->vel = 50;
        g->mole[1]->vel = 50;
        g->mole[2]->vel = 50;
        g->hearts->rect.top = 0;
        sfSprite_setTextureRect(g->hearts->spr, g->hearts->rect);
        g->count_ret = 0;
    }
    return 0;
}

int is_mouse_on_sb(global_t *g)
{
    float xm = g->mouse->pos.x;
    float ym = g->mouse->pos.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(g->sb_button->spr);
    sfEvent event;

    sfRenderWindow_pollEvent(g->window, &event);
    if (g->mole[0]->spawn == sfFalse)
        replace_high_score(g);
    if (sfFloatRect_contains(&rect, xm, ym) == sfTrue &&
        g->mole[0]->spawn == sfFalse && sfMouse_isButtonPressed(sfMouseLeft)) {
            g->game_state = scoreboard;
    }
    return 0;
}

int is_mouse_on_sb_ex(global_t *g)
{
    float xm = g->mouse->pos.x;
    float ym = g->mouse->pos.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(g->sb_exit->spr);
    sfEvent event;

    if (g->game_state != scoreboard)
        return 0;
    sfRenderWindow_pollEvent(g->window, &event);
    if (sfFloatRect_contains(&rect, xm, ym) == sfTrue &&
        g->mole[0]->spawn == sfFalse && sfMouse_isButtonPressed(sfMouseLeft) &&
        g->game_state == scoreboard) {
            g->game_state = game_over;
    }
    return 0;
}