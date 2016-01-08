# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 16:21:09 by smrabet           #+#    #+#              #
#    Updated: 2015/12/15 13:48:04 by smrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c main.c ft_putchar.c ft_putstr.c ft_atoi.c size_files.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

clean:
	/bin/rm -f ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
