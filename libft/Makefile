# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #ß
#    Created: 2022/03/15 00:46:09 by chaeyhan          #+#    #+#              #
#    Updated: 2022/03/25 21:45:39 by chaeyhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# debug:
# 	gcc -Wall -Wextra -Werror -g test.c libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a
SOURCES = ft_isalnum.c \
			ft_memchr.c \
			ft_strchr.c \
			ft_strncmp.c \
			ft_isalpha.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_bzero.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			#ft_lstmap.c \

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

bonus: 

$(NAME) : $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
