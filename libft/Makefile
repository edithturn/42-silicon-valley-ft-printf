# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 19:14:09 by epuclla           #+#    #+#              #
#    Updated: 2020/08/24 16:06:38 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c

SOURCES	= ft_strcpy.c \
										ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strcmp.c ft_atoi.c \
										ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
										ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
										ft_putchar_fd.c ft_putstr_fd.c \
										ft_substr.c ft_nbrlen.c ft_strncpy.c


OBJETS = $(SOURCES:%.c=%.o)
INCLUDES=./

all: $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SOURCES) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJETS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJETS)

fclean: 	clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re