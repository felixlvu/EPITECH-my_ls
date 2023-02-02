##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC = my_putstr.c \
      my_strcat.c \
      my_str_tablen.c \
      non_printable_char.c \
      decimal_to_octal.c \
      print_case_min.c \
      print_addressptr.c \
      my_numhexa_ptr.c \
      my_unsigned_put_nbr.c \
      my_put_nbrsign.c \
      my_put_float.c \
      my_numhexa_min.c \
      my_numbin.c \
      my_numoct.c \
      my_compute_power_rec.c \
      my_numhexa.c \
      my_numlen.c \
      my_strcpy.c \
      my_putchar.c \
      my_putstr.c \
      my_strncmp.c \
      my_strncat.c \
      my_strlowcase.c \
      my_str_isupper.c \
      my_str_isprintable.c \
      my_str_isnum.c \
      my_str_islower.c \
      my_str_isalpha.c \
      my_strcapitalize.c \
      my_sort_int_array.c \
      my_showstr.c \
      my_showmem.c \
      my_revstr.c \
      my_is_prime.c \
      my_strupcase.c \
      my_strstr.c \
      my_strncpy.c \
      my_strcmp.c \
      my_getnbr.c \
      my_find_prime_sup.c \
      my_compute_square_root.c \
      my_swap.c \
      my_strlen.c \
      my_isneg.c \
      flag_scientific.c \
      lib.c \
      my_base.c \
      my_put_float.c \
      nbr_spec.c \
      pointer.c \
      print_c.c \
      print_scientific.c \
      printf_nbr.c \
      printf.c \
      unprintable_char.c \
      flag_base.c \

OBJ = $(SRC:.c=.o)

HEADER = my.h

NAME = libmy.a

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
