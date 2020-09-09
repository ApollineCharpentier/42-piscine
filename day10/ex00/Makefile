# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 21:20:06 by apcharpe          #+#    #+#              #
#    Updated: 2018/08/22 16:21:02 by apcharpe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = ./includes/
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OUTPUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I $(HEADERS)
	ar rv $(NAME) $(OUTPUT)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
