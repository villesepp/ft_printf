# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 16:13:37 by vseppane          #+#    #+#              #
#    Updated: 2024/05/11 14:28:33 by vseppane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

CC =	cc

# enable errors when done
#CFLAGS =	-Wall -Wextra -Werror
CFLAGS =	

SOURCES =	ft_printf.c \
			ft_pfputchar.c \
			ft_pfputhex.c \
			ft_pfputnbr.c\
			ft_pfputunbr.c\
			ft_pfputstr.c \
			ft_pfputptr.c \
			ft_pfitoa.c \
			main.c

# delete main.c :)


OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rc $@ $?

all:
	$(CC) -o a.out *.c
	./a.out
# delete this :)

clean:		
	rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)
			rm -f ./a.out
# delete a.out :)

re:			fclean all

.PHONY: 	all clean fclean re b
# delete out :)
