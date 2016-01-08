# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/25 19:22:42 by smrabet           #+#    #+#              #
#    Updated: 2015/10/25 19:22:45 by smrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh 
gcc -Wall -Werror -Wextra -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libft.a
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
