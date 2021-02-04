/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** create_mole
*/

#include "my.h"

void create_mole(mole_t *spr, char *ressource, sfVector2f pos)
{
    spr->spr = sfSprite_create();
    spr->text = sfTexture_createFromFile(ressource, NULL);
    sfSprite_setTexture(spr->spr, spr->text, sfTrue);
    sfSprite_setPosition(spr->spr, pos);
    sfSprite_setScale(spr->spr, v2f(1, 1));
    sfTexture_setRepeated(spr->text, sfTrue);
    spr->pos.x = pos.x;
    spr->pos.y = pos.y;
    spr->ascend = 1;
    spr->vel = 50;
    spr->height_m = 300;
    spr->angle = -45;
    spr->dist = spr->pos.y - spr->height_m;
    spr->state = alive;
}