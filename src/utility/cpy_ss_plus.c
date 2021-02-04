/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** cpy_ss_plus
*/

#include "my.h"

int find_line_nb(char **buffer)
{
    int line = 0;

    for (; buffer[line] != NULL; line++);
    return line;
}

char **malloc_ss_plus(char **buffer, int line_change, char *put)
{
    char **tmp = malloc(sizeof(char *) * find_line_nb(buffer) + 1);
    int y = 0;

    for (int i = 0; buffer[i] != NULL; y++) {
        if (y != line_change) {
            tmp[y] = malloc(sizeof(char) * my_strlen(buffer[i]));
            i++;
        } else
            tmp[y] = malloc(sizeof(char) * my_strlen(put));
    }
    return tmp;
}

char **cpy_ss_plus(char **buffer, int line_change, char *put)
{
    char **tmp = malloc_ss_plus(buffer, line_change, put);
    int il = 0;
    int yl = 0;

    for (; buffer[il] != NULL; yl++) {
        if (yl != line_change) {
            tmp[yl] = my_strcpy(tmp[yl], buffer[il]);
            il++;
        } else {
            tmp[yl] = my_strcpy(tmp[yl], put);
        }
    }
    tmp[yl] = NULL;
    return tmp;
}