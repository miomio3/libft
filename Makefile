# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mio <mio@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 20:13:10 by mmidorik          #+#    #+#              #
#    Updated: 2021/07/27 23:37:09 by mio              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
OBJ = $(SRC:.c=.o)

all			:$(NAME)
$(NAME)		:$(OBJ)
	ar -cr $(NAME) $(OBJ)
%.o			:%.c
	$(CC) $(FLUG) -c $<
clean		:
	rm -f $(OBJ)
fclean		:clean
	rm -f $(NAME)
re			:fclean all

.PHONY		:all clean fclean re