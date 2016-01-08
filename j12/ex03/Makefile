# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/24 16:28:17 by smrabet           #+#    #+#              #
#    Updated: 2015/12/24 16:43:09 by smrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRCS = *.c

FLAG = -Wall -Wextra -Werror

OBJ = ft_strrev.o ft_other.o ft_print.o ft_printt.o ft_convert_base.o ft_display.o main.o hexdump.o


all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -c
	gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
