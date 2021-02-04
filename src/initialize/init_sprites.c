/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_sprites
*/

#include "my.h"

void set_spr_rect(global_t *g)
{
    g->rock_1->rect = set_rect(0, 0, 1920, 1080);
    g->rock_2->rect = set_rect(0, 0, 1920, 1080);
    g->ground->rect = set_rect(0, 0, 1920, 1080);
    g->clouds[0]->rect = set_rect(0, 0, 1920, 1080);
    g->clouds[1]->rect = set_rect(0, 0, 1920, 1080);
    g->clouds[2]->rect = set_rect(0, 0, 1920, 1080);
    g->exp[0]->rect = set_rect(27, -180, 180, 160);
    g->exp[1]->rect = set_rect(27, 0, 180, 160);
    g->exp[2]->rect = set_rect(27, 0, 180, 160);
    g->hearts->rect = set_rect(0, 0, 120, 30);
    g->retry->rect = set_rect(0, 0, 15, 15);
    g->exit->rect = set_rect(0, 0, 15, 15);
    g->sb_button->rect = set_rect(0, 0, 15, 15);
}

void set_spr_text(global_t *g)
{
    sfSprite_setTextureRect(g->rock_1->spr, g->rock_1->rect);
    sfSprite_setTextureRect(g->rock_2->spr, g->rock_2->rect);
    sfSprite_setTextureRect(g->ground->spr, g->ground->rect);
    sfSprite_setTextureRect(g->clouds[0]->spr, g->clouds[0]->rect);
    sfSprite_setTextureRect(g->clouds[1]->spr, g->clouds[1]->rect);
    sfSprite_setTextureRect(g->clouds[2]->spr, g->clouds[2]->rect);
    sfSprite_setTextureRect(g->exp[0]->spr, g->exp[0]->rect);
    sfSprite_setTextureRect(g->exp[1]->spr, g->exp[1]->rect);
    sfSprite_setTextureRect(g->exp[2]->spr, g->exp[2]->rect);
    sfSprite_setTextureRect(g->hearts->spr, g->hearts->rect);
    sfSprite_setTextureRect(g->retry->spr, g->retry->rect);
    sfSprite_setTextureRect(g->exit->spr, g->exit->rect);
    sfSprite_setTextureRect(g->exit->spr, g->exit->rect);
    sfSprite_setTextureRect(g->sb_button->spr, g->sb_button->rect);
    sfSprite_setScale(g->hearts->spr, v2f(3, 3));
}

void init_sprites_2(global_t *g)
{
    create_sprite(g->hearts, BG_hea, v2f(20, 30));
    create_sprite(g->go, BG_go, v2f(400, 0));
    create_sprite(g->retry, BG_re, v2f(590, 520));
    create_sprite(g->exit, BG_ex, v2f(1040, 520));
    create_sprite(g->sb_button, BG_sb_spr, v2f(812, 520));
    create_scoreboard(g, g->sb, BG_sb, v2f(420, 90));
    sfSprite_setScale(g->sb_button->spr, v2f(10, 10));
    sfSprite_setScale(g->retry->spr, v2f(10, 10));
    sfSprite_setScale(g->exit->spr, v2f(10, 10));
    create_sprite(g->sb_exit, BG_ex, v2f(590, 650));
    sfSprite_setScale(g->sb_exit->spr, v2f(10, 10));
}

void init_sprites(global_t *g)
{
    float xm = mouse_x;
    float ym = mouse_y;

    set_spr_rect(g);
    create_sprite(g->sky, BG_sky, v2f(0, 0));
    create_sprite(g->rock_1, BG_r1, v2f(0, 0));
    create_sprite(g->rock_2, BG_r2, v2f(0, 0));
    create_sprite(g->clouds[0], BG_c1, v2f(0, 0));
    create_sprite(g->clouds[1], BG_c2, v2f(0, 0));
    create_sprite(g->clouds[2], BG_c3, v2f(0, 0));
    create_mole(g->mole[0], BG_mo, v2f(500, 1000));
    create_mole(g->mole[1], BG_mo, v2f(800, 1000));
    create_mole(g->mole[2], BG_mo, v2f(1200, 1000));
    create_sprite(g->ground, BG_gr, v2f(0, 0));
    create_mouse(g->mouse, BG_tar, v2f(xm, ym));
    create_exp(g->exp[0], BG_exp, v2f(-1000, -1000));
    create_exp(g->exp[1], BG_exp, v2f(-1000, -1000));
    create_exp(g->exp[2], BG_exp, v2f(-1000, -1000));
    init_sprites_2(g);
    set_spr_text(g);
}