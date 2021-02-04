##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC		=	src/initialize/init_window.c\
			src/initialize/init_sprites.c\
			src/initialize/init_all.c\
			src/initialize/malloc_spr.c\
			src/initialize/create_sprite.c\
			src/initialize/create_mole.c\
			src/sprites/disp_sprites.c\
			src/sprites/disp_go.c\
			src/sprites/move_all_sprites_left.c\
			src/window/check_close.c\
			src/clock/clock.c\
			src/utility/v2f.c\
			src/utility/int_to_str.c\
			src/utility/set_rect.c\
			src/utility/move_sprites_left.c\
			src/utility/cpy_ss_plus.c\
			src/utility/free_all.c\
			src/utility/usage.c\
			src/utility/text_util.c\
			src/utility/my_str_to_word_array_sep.c\
			src/mole/move_respawn_mole.c\
			src/mole/check_mole_hearts.c\
			src/mole/set_all_mole_spawn.c\
			src/cursor/init_cursor.c\
			src/cursor/move_cursor.c\
			src/cursor/is_mouse_on_mole.c\
			src/cursor/is_mouse_on_retry.c\
			src/exp/move_left_exp.c\
			src/exp/check_reset_exp.c\
			src/exp/disp_exp.c\
			src/score/init_score.c\
			src/score/update_score.c\
			src/score/is_score_bigger.c\
			src/score/create_scoreboard.c\
			src/score/replace_high_score.c\
			src/audio/init_music.c\

SRC_M	=	src/main.c

SRC_UT	=	tests/*.c

OBJ		=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include -I../include

NAME	=	my_hunter

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window -g -lm

CFLAGS_UT	=	-lcriterion --coverage -lgcov

LIB		=	-L lib/ -lmy

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS) $(LIB)

tests_run:	$(OBJ) $(OBJ_UT)
		make -C lib/my/
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LIB)
		./$(NAME_UT)
		gcovr -e tests

clean:
		$(RM) $(OBJ) $(OBJ_M) lib/my/*.o lib/libmy.a lib/my/libmy.a *gcno *gcda *~

fclean:		clean fclean_ut
		$(RM) $(NAME) tests/*.o

fclean_ut: clean
		$(RM) $(NAME_UT)

re:		fclean all