/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** create_sprite
*/

#include "my.h"

void create_exp(exp_t *spr, char *ressource, sfVector2f pos)
{
    spr->spr = sfSprite_create();
    spr->text = sfTexture_createFromFile(ressource, NULL);
    sfSprite_setTexture(spr->spr, spr->text, sfTrue);
    sfSprite_setPosition(spr->spr, pos);
    sfTexture_setRepeated(spr->text, sfTrue);
    sfSprite_setScale(spr->spr, v2f(2.75, 2.75));
    spr->count_exp = 0;
    spr->state = not_launched;
}

void create_sprite(spr_t *spr, char *ressource, sfVector2f pos)
{
    spr->spr = sfSprite_create();
    spr->text = sfTexture_createFromFile(ressource, NULL);
    sfSprite_setTexture(spr->spr, spr->text, sfTrue);
    sfSprite_setPosition(spr->spr, pos);
    sfTexture_setRepeated(spr->text, sfTrue);
}