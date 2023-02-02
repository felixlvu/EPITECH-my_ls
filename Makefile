##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC = ./src/find_flags.c \
	  ./src/flag_a.c \
	  ./src/flag_d.c \
	  ./src/flag_l.c \
	  ./src/main.c \
	  ./src/no_flag.c \
	  ./src/sort_alpha.c \

OBJ = $(SRC:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/ -g3

NAME = my_ls

$(NAME): $(OBJ)
	make -C ./lib/my/
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LIB)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re: fclean all

debug:	CFLAGS += -g3
debug:	re
