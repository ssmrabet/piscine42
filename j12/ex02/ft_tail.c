/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:03:22 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/24 16:49:39 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	positive(int readed, char *buf, int tail, int fl)
{
	int		len;

	while ((len = read(fl, buf, 1)) != 0)
	{
		if (readed == tail - 1)
		{
			buf[len] = '\0';
			ft_putstr(buf);
		}
		else
			readed++;
	}
}

void	negative(int size, char *buf, int tail, int fl)
{
	int		len;
	int		readed;

	readed = 0;
	while ((len = read(fl, buf, 1)) != 0)
	{
		if (readed == size - tail)
		{
			buf[len] = '\0';
			ft_putstr(buf);
		}
		else
			readed++;
	}
}

int		ft_tail(int sign, int tail, int size, char *file)
{
	char	buf[2];
	int		len;
	int		fl;
	int		readed;

	readed = 0;
	if ((fl = open(file, O_RDONLY)) == -1)
		return (errno);
	if (sign == 1)
		positive(readed, buf, tail, fl);
	else
	{
		if (size > tail)
			negative(size, buf, tail, fl);
		else
		{
			while ((len = read(fl, buf, 1) != 0))
				write(1, &buf[0], 1);
		}
	}
	close(fl);
	return (0);
}
