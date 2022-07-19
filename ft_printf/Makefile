NAME = libftprintf.a
CC = gcc
FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c\
		ft_printf_utils.c\
		print_functions.c\

OBJ = $(SRC:.c=.o)

all : $(NAME)


$(NAME) : $(OBJ)
	ar rcs $@ $(OBJ)

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all