/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** usage
*/

#include "my.h"

int comp_str(char *s1, char *s2)
{
    int i = 0;

    for (; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return 0;
    return 1;
}

int usage(int ac, char **av)
{
    if (ac == 2 && comp_str(av[1], "-h") == 1) {
        my_printf("Play 1984 NES Duck Hunt® replica !\n\n");
        my_printf("USAGE:\n");
        my_printf("     ./my_hunter\n");
        my_printf("     Move mouse to move cursor\n");
        my_printf("     Press right click on moles to shoot !\n");
        my_printf("     Scoreboard will be loaded ");
        my_printf("on the terminal when quitting\n");
        return 1;
    }
    return 0;
}