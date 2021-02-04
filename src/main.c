/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** main
*/

#include "my.h"

void my_putstr_x(char *str, int x)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == x)
            break;
        my_putchar(str[i]);
    }
}

void disp_scoreboard(global_t *g)
{
    my_printf("Scoreboard:\n");
    my_printf("    1st: ");
    my_putstr_x(sbn[0], 3);
    my_printf(" %d points !\n\n", gnb(sbi[0]));
    my_printf("    2nd: ");
    my_putstr_x(sbn[1], 3);
    my_printf(" %d points !\n\n", gnb(sbi[1]));
    my_printf("    3rd: ");
    my_putstr_x(sbn[2], 3);
    my_printf(" %d points !\n", gnb(sbi[2]));
}

int main(int ac, char **av)
{
    global_t *g = NULL;

    if (usage(ac, av) == 1)
        return 0;
    g = init_all(g);
    while (sfRenderWindow_isOpen(g->window)) {
        disp_sprites(g);
        sfRenderWindow_display(g->window);
    }
    sfMusic_stop(g->audio->music);
    sfMusic_destroy(g->audio->music);
    free_g(g);
    return 0;
}