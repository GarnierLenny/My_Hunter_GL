/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** text_util
*/

#include "my.h"

sfText *init_text_sb(sfText *text, int c_size, char *str, sfVector2f pos)
{
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile(BG_font);
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, c_size);
    return text;
}

sfText *init_text_bg(sfText *text, int c_size, char *str, sfVector2f pos)
{
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile(BG_font);
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, c_size);
    return text;
}

void set_text_color(sfText *text, sfColor color)
{
    sfText_setColor(text, color);
    sfText_setOutlineColor(text, sfBlack);
    sfText_setOutlineThickness(text, 2);
}

sfColor color_set(int r, int g, int b)
{
    sfColor color;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = 255;
    return color;
}