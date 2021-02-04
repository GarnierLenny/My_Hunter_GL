/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_cursor
*/

#include "my.h"

void create_mouse(mouse_t *spr, char *ressource, sfVector2f pos)
{
    spr->spr = sfSprite_create();
    spr->text = sfTexture_createFromFile(ressource, NULL);
    sfSprite_setTexture(spr->spr, spr->text, sfTrue);
    sfSprite_setPosition(spr->spr, pos);
    sfTexture_setRepeated(spr->text, sfTrue);
    sfSprite_setScale(spr->spr, v2f(0.3, 0.3));
}