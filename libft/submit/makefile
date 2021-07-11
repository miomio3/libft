# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 20:13:10 by mmidorik          #+#    #+#              #
#    Updated: 2021/07/10 22:14:26 by mmidorik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = libft.h ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c
OBJ = $(SRC:%.c=%.o)

all:$(NAME)
$(NAME):$(OBJ)
	ar -cr  $(NAME) $(OBJ)
$(OBJ):$(SRC)
	$(CC) $(FLUG) -c $(SRC)
clean:
	rm -f *.o $
fclean:
		
re:
	