# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/05 14:00:10 by epuclla           #+#    #+#              #
#    Updated: 2020/08/06 07:33:50 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -c

SRCS=./libft/ft*.c ./source_files/ft*.c ./source_files/solve*.c

OBJECTS=ft*.o solve*.o
LIB_PATH = ./libft
INCLUDES=./

all:$(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS) -I$(INCLUDES) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

bonus: re

clean:
	@/bin/rm -f $(OBJECTS)
	@make clean -C $(LIB_PATH)


fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re