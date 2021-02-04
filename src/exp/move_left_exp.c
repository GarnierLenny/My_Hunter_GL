/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** move_left_exp
*/

#include "my.h"

void move_sprites_left_exp(exp_t *spr, int offset)
{
    spr->rect.left += offset;
    sfSprite_setTextureRect(spr->spr, spr->rect);
}