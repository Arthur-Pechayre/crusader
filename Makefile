CC =	gcc

NAME =	crusader

SRC = main.c 		\
	includes/init.c					\
	includes/solve.c 				\
	includes/checks_1.c				\
	includes/checks_2.c				\
	includes/lists_manager.c		\
	includes/get_string_from_file.c	\
	includes/openables.c			\
	includes/check_args.c 			\
	includes/my_putchar.c			\
	includes/my_putstr.c			\
	includes/my_put_nbr.c 			\
	includes/my_open.c 				\
	includes/my_explode.c 			\
	includes/my_count_words.c		\
	includes/display_soluce.c		\
	includes/libre.c

RM =	rm -f

OBJ =	$(SRC:%.c=%.o)

CFLAGS = -W -Wall -Wextra -Werror -g

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all