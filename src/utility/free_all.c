/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** "
*/

#include "my.h"

void destroy_sprites(global_t *g)
{
    sfSprite_destroy(g->sky->spr);
    sfSprite_destroy(g->rock_1->spr);
    sfSprite_destroy(g->rock_2->spr);
    sfSprite_destroy(g->ground->spr);
    sfSprite_destroy(g->clouds[0]->spr);
    sfSprite_destroy(g->clouds[1]->spr);
    sfSprite_destroy(g->clouds[2]->spr);
    sfSprite_destroy(g->mole[0]->spr);
    sfSprite_destroy(g->mole[1]->spr);
    sfSprite_destroy(g->mole[2]->spr);
    sfSprite_destroy(g->mouse->spr);
    sfSprite_destroy(g->exp[0]->spr);
    sfSprite_destroy(g->exp[1]->spr);
    sfSprite_destroy(g->exp[2]->spr);
    sfSprite_destroy(g->hearts->spr);
    sfSprite_destroy(g->go->spr);
    sfSprite_destroy(g->retry->spr);
    sfSprite_destroy(g->exit->spr);
    sfSprite_destroy(g->sb->spr);
}

void destroy_textures(global_t *g)
{
    sfRenderWindow_destroy(g->window);
    sfTexture_destroy(g->sky->text);
    sfTexture_destroy(g->rock_1->text);
    sfTexture_destroy(g->rock_2->text);
    sfTexture_destroy(g->ground->text);
    sfTexture_destroy(g->clouds[0]->text);
    sfTexture_destroy(g->clouds[1]->text);
    sfTexture_destroy(g->clouds[2]->text);
    sfTexture_destroy(g->mole[0]->text);
    sfTexture_destroy(g->mole[1]->text);
    sfTexture_destroy(g->mole[2]->text);
    sfTexture_destroy(g->mouse->text);
    sfTexture_destroy(g->exp[0]->text);
    sfTexture_destroy(g->exp[1]->text);
    sfTexture_destroy(g->exp[2]->text);
    sfTexture_destroy(g->hearts->text);
    sfTexture_destroy(g->go->text);
    sfTexture_destroy(g->retry->text);
    sfTexture_destroy(g->exit->text);
    sfTexture_destroy(g->sb->txt);
}

void free_all(global_t *g)
{
    free(g->sky);
    free(g->rock_1);
    free(g->rock_2);
    free(g->ground);
    free(g->clouds[0]);
    free(g->clouds[1]);
    free(g->clouds[2]);
    free(g->mole[0]);
    free(g->mole[1]);
    free(g->mole[2]);
    free(g->exp[0]);
    free(g->exp[1]);
    free(g->exp[2]);
    free(g->hearts);
    free(g->go);
    free(g->retry);
    free(g->exit);
    free(g->mouse);
    free(g->audio);
}

int destroy_text(global_t *g)
{
    sfText_destroy(g->sb->points_str[0]);
    sfText_destroy(g->sb->points_str[1]);
    sfText_destroy(g->sb->points_str[2]);
    sfText_destroy(g->sb->sb_title);
    sfText_destroy(g->sb->score_i[0]);
    sfText_destroy(g->sb->score_i[1]);
    sfText_destroy(g->sb->score_i[2]);
    sfText_destroy(g->sb->score_n[0]);
    sfText_destroy(g->sb->score_n[1]);
    sfText_destroy(g->sb->score_n[2]);
    sfText_destroy(g->score->highscore);
    sfText_destroy(g->score->score_text);
    return 0;
}

int free_g(global_t *g)
{
    destroy_text(g);
    destroy_sprites(g);
    sfRenderWindow_destroy(g->window);
    free_all(g);
    return 0;
}