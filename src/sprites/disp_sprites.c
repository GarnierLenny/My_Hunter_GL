/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** disp_sprites
*/

#include "my.h"

void disp_sprites_2(global_t *g)
{
    is_mouse_on_mole(g);
    disp_exp(g);
    sfRenderWindow_drawSprite(g->window, g->hearts->spr, NULL);
    disp_go(g);
    sfRenderWindow_drawText(g->window, g->score->score_text, NULL);
    sfRenderWindow_drawText(g->window, g->score->highscore, NULL);
    sfRenderWindow_drawSprite(g->window, g->mouse->spr, NULL);
    move_mouse(g);
}

void disp_all_sprites(global_t *g)
{
    check_ev_mole_spawn(g);
    sfRenderWindow_drawSprite(g->window, g->sky->spr, NULL);
    sfRenderWindow_drawSprite(g->window, g->rock_1->spr, NULL);
    sfRenderWindow_drawSprite(g->window, g->clouds[0]->spr, NULL);
    sfRenderWindow_drawSprite(g->window, g->clouds[1]->spr, NULL);
    sfRenderWindow_drawSprite(g->window, g->rock_2->spr, NULL);
    sfRenderWindow_drawSprite(g->window, g->clouds[2]->spr, NULL);
    if (g->mole[0]->state == alive) {
        sfRenderWindow_drawSprite(g->window, g->mole[0]->spr, NULL);
        sfRenderWindow_drawSprite(g->window, g->mole[1]->spr, NULL);
        sfRenderWindow_drawSprite(g->window, g->mole[2]->spr, NULL);
    }
    sfRenderWindow_drawSprite(g->window, g->ground->spr, NULL);
    if ((move_mole(g->mole[0]) == 1 || move_mole(g->mole[1]) == 1 ||
        move_mole(g->mole[2]) == 1) && g->mole[0]->spawn == sfTrue)
            check_reduce_health(g);
}

void disp_sprites(global_t *g)
{
    disp_all_sprites(g);
    if (g->game_state == scoreboard) {
        get_scoreboard_info(g, g->sb);
        disp_sb(g);
    }
    disp_sprites_2(g);
    if (g->game_state != scoreboard)
        move_all_sprites_left(g);
    is_mouse_on_retry(g);
    is_mouse_on_exit(g);
    is_mouse_on_sb(g);
    is_mouse_on_sb_ex(g);
    update_score(g);
    clock_h();
}