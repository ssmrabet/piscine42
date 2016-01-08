# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 13:09:04 by smrabet           #+#    #+#              #
#    Updated: 2015/12/15 13:48:46 by smrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = main.c ft_cat.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) main.o ft_cat.o ft_putchar.o ft_putstr.o

clean:
	/bin/rm -f main.o ft_cat.o ft_putchar.o ft_putstr.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
