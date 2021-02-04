/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** create_scoreboard
*/

#include "my.h"

void init_top_scores_names(global_t *g, scoreboard_t *sb)
{
    sb->score_n[0] = init_text_bg(sb->score_n[0], 70,
        g->score->score_names[0], v2f(600, 350));
    set_text_color(sb->score_n[0], color_set(255, 215, 0));
    sb->score_n[1] = init_text_bg(sb->score_n[1], 70,
        g->score->score_names[1], v2f(600, 450));
    set_text_color(sb->score_n[1], color_set(192, 192, 192));
    sb->score_n[2] = init_text_bg(sb->score_n[2], 70,
        g->score->score_names[2], v2f(600, 550));
    set_text_color(sb->score_n[2], color_set(205, 127, 50));
}

void init_top_scores_points_int(global_t *g, scoreboard_t *sb)
{
    sb->score_i[0] = init_text_bg(sb->score_i[0], 70,
        g->score->sb_int[0], v2f(850, 350));
    set_text_color(sb->score_i[0], color_set(255, 215, 0));
    sb->score_i[1] = init_text_bg(sb->score_i[1], 70,
        g->score->sb_int[1], v2f(850, 450));
    set_text_color(sb->score_i[1], color_set(192, 192, 192));
    sb->score_i[2] = init_text_bg(sb->score_i[2], 70,
        g->score->sb_int[2], v2f(850, 550));
    set_text_color(sb->score_i[2], color_set(205, 127, 50));
}

void init_top_scores_points_str(global_t *g, scoreboard_t *sb)
{
    g = g;
    sb->points_str[0] = init_text_bg(sb->points_str[0], 70,
        "POINTS", v2f(1000, 350));
    set_text_color(sb->points_str[0], color_set(255, 215, 0));
    sb->points_str[1] = init_text_bg(sb->points_str[1], 70,
        "POINTS", v2f(1000, 450));
    set_text_color(sb->points_str[1], color_set(192, 192, 192));
    sb->points_str[2] = init_text_bg(sb->points_str[2], 70,
        "POINTS", v2f(1000, 550));
    set_text_color(sb->points_str[2], color_set(205, 127, 50));
}

void get_scoreboard_info(global_t *g, scoreboard_t *sb)
{
    init_top_scores_names(g, sb);
    init_top_scores_points_int(g, sb);
    init_top_scores_points_str(g, sb);
}

void create_scoreboard(global_t *g, scoreboard_t *sb, char *ressource, sfVector2f pos)
{
    g = g;
    sb->spr = sfSprite_create();
    sb->txt = sfTexture_createFromFile(ressource, NULL);
    sfSprite_setTexture(sb->spr, sb->txt, sfTrue);
    sfSprite_setPosition(sb->spr, pos);
    sb->sb_title = init_text_sb(sb->sb_title, 110,
        "SCOREBOARD", v2f(580, 170));
    sfText_setColor(sb->sb_title, sfWhite);
    sfText_setOutlineColor(sb->sb_title, sfBlack);
    sfText_setOutlineThickness(sb->sb_title, 2);
}