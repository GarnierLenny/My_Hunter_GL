/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct music_s{
    sfMusic *music;
    sfMusic *explosion;
}music_t;

typedef enum game_state_s {
    game_on,
    game_over,
    scoreboard,
} game_state_t;

typedef enum exp_state_s {
    not_launched,
    launched,
} exp_state_t;

typedef struct exp_s {
    sfSprite *spr;
    sfTexture *text;
    exp_state_t state;
    sfVector2f pos;
    sfIntRect rect;
    int count_exp;
} exp_t;

typedef struct mouse_s {
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
} mouse_t;

typedef enum state_s {
    alive,
    dead,
} state_t;

typedef struct mole_s {
    sfSprite *spr;
    sfTexture *text;
    sfIntRect rect;
    sfVector2f pos;
    state_t state;
    float height_m;
    int ascend;
    float vel;
    float angle;
    float dist;
    sfBool spawn;
} mole_t;

typedef struct spr_s {
    sfSprite *spr;
    sfTexture *text;
    sfIntRect rect;
} spr_t;

typedef struct score_s {
    int score;
    sfText *score_text;
    int fd;
    sfText *highscore;
    char **sb_int;
    char **score_names;
} score_t;

typedef struct scoreboard_s {
    sfSprite *spr;
    sfTexture *txt;
    sfVector2f pos;
    sfText *sb_title;
    sfText *score_i[3];
    sfText *score_n[3];
    sfText *points_str[3];
} scoreboard_t;

typedef struct global_s {
    sfEvent evt;
    sfRenderWindow *window;
    spr_t *sky;
    spr_t *rock_1;
    spr_t *rock_2;
    spr_t *ground;
    spr_t *clouds[3];
    mole_t *mole[3];
    mouse_t *mouse;
    exp_t *exp[3];
    spr_t *hearts;
    spr_t *go;
    spr_t *retry;
    spr_t *exit;
    spr_t *sb_button;
    spr_t *sb_exit;
    int count_ex;
    int count_ret;
    int count_sb;
    int count_sb_ex;
    scoreboard_t *sb;
    score_t *score;
    game_state_t game_state;
    music_t *audio;
} global_t;

#endif /* !STRUCT_H_ */