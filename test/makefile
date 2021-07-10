# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 20:13:10 by mmidorik          #+#    #+#              #
#    Updated: 2021/07/10 22:08:52 by mmidorik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc
FLUG = -Wall -Wextra -Werror
SRC = main.c ft_lib.h
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
	