/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 11:35:58 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/29 19:45:21 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	g_vide;
char	g_obs;
char	g_plein;

int		check_nb_lines(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i + 3] && str[i] >= '0' && str[i] <= '9' && i < 100)
		i++;
	if (!(str[i] && str[i + 1] && str[i + 2]))
		return (put_map_error());
	g_vide = str[i];
	g_obs = str[i + 1];
	g_plein = str[i + 2];
	str[i] = '\0';
	return (0);
}

void	print_line(char *tmp, t_max *max, int nb_cols)
{
	int		i;

	i = 1;
	write(1, &tmp[0], max->x_max - max->size);
	while (i++ <= max->size)
		write(1, &g_plein, 1);
	i = max->x_max;
	write(1, &tmp[i], nb_cols - i);
}

int		init_first_line(int fd, unsigned int *first, char *tmp, t_max *max)
{
	int		i;
	int		size_max;

	i = 0;
	size_max = max->size;
	while (read(fd, &tmp[i], 1) > 0 && tmp[i] != '\n')
	{
		first[i] = 0;
		if (tmp[i] == g_vide)
		{
			first[i] = 1;
			if (size_max <= 0)
				size_max = save_max(max, i, 1, 1);
		}
		else if (tmp[i] != g_obs)
			return (put_map_error());
		i = i + 1;
	}
	if (tmp[i] == 0)
		return (put_map_error());
	return (0);
}

int		init_first_car(char *tmp, unsigned int *ptr2, t_max *max, int line)
{
	ptr2[0] = 0;
	if (tmp[0] == g_vide)
		ptr2[0] = 1;
	else if (tmp[0] != g_obs && tmp[0] != '\n')
		return (put_map_error());
	if (max->size <= 0 && ptr2[0] == 1)
		max->size = save_max(max, 0, line, ptr2[0]);
	return (0);
}

int		put_int_tab(char *tmp, unsigned int *ptr1,
			unsigned int *ptr2, t_max *max)
{
	static int		line;
	unsigned int	size_max;
	unsigned int	i;

	i = 1;
	((max->new)++ == 1) ? (line = 2) : (0);
	if ((init_first_car(tmp, ptr2, max, line)) != 0)
		return (-1);
	size_max = max->size;
	while (tmp[i] != '\n')
	{
		ptr2[i] = 0;
		if (tmp[i] == g_vide)
		{
			ptr2[i] = minimum(ptr2[i - 1], ptr1[i - 1], ptr1[i]) + 1;
			if (ptr2[i] > size_max)
				size_max = save_max(max, i, line, ptr2[i]);
		}
		else if (tmp[i] != g_obs)
			return (put_map_error());
		++i;
	}
	++line;
	return (0);
}
