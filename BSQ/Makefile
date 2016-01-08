# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/29 12:36:42 by smrabet           #+#    #+#              #
#    Updated: 2015/12/29 12:39:54 by smrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = print.c main.c bsq_file.c outils.c other.c errors.c ft_atoi.c get.c

OBJ = print.o main.o bsq_file.o outils.o other.o errors.o ft_atoi.o get.o

LIB = libft.h

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(LIB)
	gcc -o $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean 
	/bin/rm -f $(NAME)

re : fclean all
