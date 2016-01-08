/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 17:10:28 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/15 14:06:40 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_names(int i, char *file)
{
	if (i > 3)
		ft_putstr("\n==> ");
	else
		ft_putstr("==> ");
	ft_putstr(file);
	ft_putstr(" <==\n");
}

int		is_numeric(char *num)
{
	int		i;

	i = 0;
	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i] != '\0' && num[i] >= '0' && num[i] <= '9')
		i++;
	if (num[i] == '\0')
		return (1);
	else
		return (-1);
}

int		number(char **argv)
{
	int		tail;

	if (is_numeric(argv[2]) == 1)
	{
		tail = ft_atoi(argv[2]);
		if (tail < 0)
			return (-tail);
		else
			return (tail);
	}
	else
	{
		ft_putstr("tail: illegal offset -- ");
		ft_putstr(argv[2]);
		ft_putstr("\n");
		return (-1);
	}
}

void	ft_puterr(char *name, char *file, int no)
{
	if (no != 0)
	{
		ft_putstr(name);
		ft_putstr("tail: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (no == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		sign;
	int		tail;
	int		size;

	sign = 0;
	i = 3;
	if (argc < 4)
		return (1);
	tail = number(argv);
	if (tail == -1)
		return (1);
	if (argv[2][0] == '+')
		sign = 1;
	while (i < argc)
	{
		if (argc > 4)
			print_names(i, argv[i]);
		size = size_files(argv[i]);
		ft_puterr(argv[0], argv[i], ft_tail(sign, tail, size, argv[i]));
		i++;
	}
	return (0);
}
