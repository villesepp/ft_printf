# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 16:13:37 by vseppane          #+#    #+#              #
#    Updated: 2024/05/14 09:44:19 by vseppane         ###   ########.fr        #
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
	@echo
	cp $(LIBFT)/$(LIBFT).a .
	@echo
	mv libft.a $(NAME)
	@echo
	$(AR) -rc $@ $?
	@echo

clean:		
	rm -f $(OBJECTS)
	@echo
	make clean -C $(LIBFT)
	@echo

fclean:		clean
	rm -f $(NAME)
	@echo
	rm -f $(LIBFT)/$(LIBFT).a
	@echo

re:			fclean all

.PHONY: 	all clean fclean re
