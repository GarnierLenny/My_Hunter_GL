/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday07-lenny.garnier
** File description:
** my
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window/Event.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/types.h>
#include <fcntl.h>
#include <math.h>
#include <stdarg.h>
#include "struct.h"
#include "define.h"

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcpy(char *dest, char *src);
char *my_strcat(char *dest, char const *src);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
char **str_to_word_array_sep(char *str, char separator);
int my_printf(char const *str, ...);
void print_hex_convert(int nb, char from);
void print_base_convert(int nb, int base);
void init_window(global_t *g);
global_t *malloc_spr(global_t *g);
void init_sprites(global_t *g);
void create_sprite(spr_t *spr, char *ressource, sfVector2f pos);
void check_close(global_t *g, sfEvent evt);
void disp_sprites(global_t *g);
global_t *init_all(global_t *g);
void clock_h(void);
sfVector2f v2f(float x, float y);
void create_sprite(spr_t *spr, char *ressource, sfVector2f pos);
void create_mole(mole_t *spr, char *ressource, sfVector2f pos);
sfIntRect set_rect(int top, int left, int width, int height);
int move_mole(mole_t *mole);
void respawn_mole(mole_t *mole);
void create_mouse(mouse_t *spr, char *ressource, sfVector2f pos);
void move_mouse(global_t *g);
void create_exp(exp_t *spr, char *ressource, sfVector2f pos);
void clock_exp(void);
void move_sprites_left_exp(exp_t *spr, int offset);
void check_reset_exp(global_t *g);
void disp_exp(global_t *g);
void if_mole_dead(global_t *g);
void set_spawn_bool(global_t *g, sfBool spawn);
void check_reduce_health(global_t *g);
void check_ev_mole_spawn(global_t *g);
void move_sprites_left(spr_t *spr, int offset);
void set_spawn_bool(global_t *g, sfBool spawn);
int set_all_mole_spawn(global_t *g, state_t state);
void disp_sprites_2(global_t *g);
int disp_go(global_t *g);
int is_mouse_on_mole(global_t *g);
int is_mouse_on_retry(global_t *g);
void move_all_sprites_left(global_t *g);
int is_mouse_on_exit(global_t *g);
char *int_to_str(int nb);
sfText *init_score(global_t *g);
sfText *update_score(global_t *g);
void replace_high_score(global_t *g);
void free_all(global_t *g);
global_t *get_scoreboard(global_t *g);
void is_score_bigger(global_t *g);
void push_line_ss(global_t *g, int line_p, char *place);
void is_score_bigger(global_t *g);
char **cpy_ss_plus(char **buffer, int line_change, char *put);
int usage(int ac, char **av);
void create_scoreboard(global_t *g, scoreboard_t *sb, char *ressource, sfVector2f pos);
int disp_sb(global_t *g);
void get_scoreboard_info(global_t *g, scoreboard_t *sb);
int is_mouse_on_sb(global_t *g);
int is_mouse_on_sb_ex(global_t *g);
void init_music(global_t *g);
void init_exp_sound(global_t *g);
global_t *malloc_spr_2(global_t *g);
sfColor color_set(int r, int g, int b);
void set_text_color(sfText *text, sfColor color);
sfText *init_text_bg(sfText *text, int c_size, char *str, sfVector2f pos);
sfText *init_text_sb(sfText *text, int c_size, char *str, sfVector2f pos);
global_t *init_sub_s_2(global_t *g);
int free_g(global_t *g);
void init_sprites_2(global_t *g);

#endif /* !MY_H_ */
