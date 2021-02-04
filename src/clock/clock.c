/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** clock
*/

#include "my.h"

void clock_h(void)
{
    sfClock *clock = sfClock_create();

    while (1) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) >= 15) {
            sfClock_restart(clock);
            break;
        }
    }
    sfClock_restart(clock);
}