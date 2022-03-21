# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaeyhan <chaeyhan@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #ß
#    Created: 2022/03/15 00:46:09 by chaeyhan          #+#    #+#              #
#    Updated: 2022/03/18 17:17:00 by chaeyhan         ###   ########.fr        #
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

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
