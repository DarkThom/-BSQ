##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Created by Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -Werror -pedantic
CFLAGS	+= -I ./include/

NAME	= bsq

SRCS	= src/calc_dimension.c		\
	src/display_tab.c		\
	src/find_square.c		\
	src/main.c			\
	src/my_algorithm.c		\
	src/my_line_column.c		\
	src/my_new_tab.c		\
	src/my_put_nbr.c		\
	src/my_start_map.c		\
	src/my_str_concatenate.c	\
	src/parsing_file.c		\
	src/parsing_file_two.c		\
	src/utilities.c			\

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
