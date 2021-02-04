/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_music
*/

#include "my.h"

void init_music(global_t *g)
{
    g->audio->music = sfMusic_createFromFile(SO_mu);
    sfMusic_setLoop(g->audio->music, sfTrue);
    sfMusic_setVolume(g->audio->music, 10);
    sfMusic_play(g->audio->music);
}

void init_exp_sound(global_t *g)
{
    g->audio->explosion = sfMusic_createFromFile(SO_ex);
}