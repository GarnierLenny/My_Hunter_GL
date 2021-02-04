/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** disp_go
*/

#include "my.h"

int disp_sb(global_t *g)
{
    sfRenderWindow_drawSprite(g->window, g->sb->spr, NULL);
    sfRenderWindow_drawText(g->window, g->sb->sb_title, NULL);

    sfRenderWindow_drawSprite(g->window, g->sb_exit->spr, NULL);
    for (int i = 0; i != 3; i++) {
        sfRenderWindow_drawText(g->window, g->sb->score_n[i], NULL);
        sfRenderWindow_drawText(g->window, g->sb->score_i[i], NULL);
        sfRenderWindow_drawText(g->window, g->sb->points_str[i], NULL);
    }
    return 0;
}

int disp_go(global_t *g)
{
    if (g->mole[0]->spawn == sfFalse && g->game_state != scoreboard) {
        g->game_state = game_over;
        g->count_ret += 1;
    }
    if (g->mole[0]->spawn == sfFalse && g->game_state == game_over) {
        set_all_mole_spawn(g, dead);
        sfRenderWindow_drawSprite(g->window, g->go->spr, NULL);
        sfRenderWindow_drawSprite(g->window, g->retry->spr, NULL);
        sfRenderWindow_drawSprite(g->window, g->sb_button->spr, NULL);
        sfRenderWindow_drawSprite(g->window, g->exit->spr, NULL);
    }
    return 0;
}