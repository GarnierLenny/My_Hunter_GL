/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** move_respawn_mole
*/

#include "my.h"

void respawn_mole(mole_t *mole)
{
    mole->pos.y = 1000;
    mole->pos.x = (rand() % 1500) + 70;
    mole->height_m = (rand() % 580) + 120;
    mole->state = alive;
    mole->ascend = 1;
    mole->vel /= 1.05;
}

int move_mole(mole_t *mole)
{
    float y = (mole->pos.y - mole->height_m);

    if (mole->pos.y >= 1050 && mole->ascend == 0 && mole->spawn == sfTrue) {
        respawn_mole(mole);
        return 1;
    }
    if (mole->pos.y <= mole->height_m + 20 || mole->ascend == 0) {
        mole->pos.y += y / mole->vel;
        mole->ascend = 0;
    } else
        mole->pos.y -= y / mole->vel;
    sfSprite_setRotation(mole->spr, mole->angle);
    mole->angle = ((45 * y) / mole->dist);
    if (mole->ascend == 1)
        mole->angle *= -1;
    sfSprite_setPosition(mole->spr, v2f(mole->pos.x, mole->pos.y));
    return 0;
}