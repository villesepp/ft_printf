# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 16:13:37 by vseppane          #+#    #+#              #
#    Updated: 2024/05/13 13:10:49 by vseppane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###   v a r i a b l e s   ###

NAME =	libftprintf.a
LIBFT =	libft
CC =	cc
CFLAGS =	-Wall -Wextra -Werror

###   s o u r c e s   ###

SOURCES =	ft_printf.c \
			ft_pfputchar.c \
			ft_pfputhex.c \
			ft_pfputnbr.c\
			ft_pfputunbr.c\
			ft_pfputstr.c \
			ft_pfputptr.c \
			ft_pfitoa.c

OBJECTS = $(SOURCES:.c=.o)

###   t a r g e t s   ###

%.o: %.c
	$(CC) -c $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) -rc $@ $?

clean:		
	rm -f $(OBJECTS)
	make clean -C $(LIBFT)

fclean:		clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a

re:			fclean all

.PHONY: 	all clean fclean re
