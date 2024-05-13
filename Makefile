# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 16:13:37 by vseppane          #+#    #+#              #
#    Updated: 2024/05/13 11:07:44 by vseppane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_printf.a

CC =	cc

CFLAGS =	-Wall -Wextra -Werror

SOURCES =	ft_printf.c \
			ft_pfputchar.c \
			ft_pfputhex.c \
			ft_pfputnbr.c\
			ft_pfputunbr.c\
			ft_pfputstr.c \
			ft_pfputptr.c \
			ft_pfitoa.c

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rc $@ $?

clean:		
	rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
