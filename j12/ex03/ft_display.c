/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_hexdump.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 16:19:18 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/24 16:19:34 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			g_add;
int			g_end;
int			g_option;
int			g_total_size;
static int	g_n;

static void	display_add(void)
{
	int		i;
	char	*tmp;

	if ((g_add % 16) == 0)
	{
		if (g_add)
			ft_putchar('\n');
		tmp = ft_convert_base(g_add, BASE, HEX);
		i = g_n - ft_strlen(tmp);
		while (i--)
			ft_putchar('0');
		ft_putstr(tmp);
	}
}

static void	read_display(char *file, void (*f)(char))
{
	char	txt;
	char	*tmp;
	int		fd;
	int		i;

	fd = open(file, O_RDONLY);
	while (read(fd, &txt, 1))
	{
		display_add();
		f(txt);
		g_add++;
		if (g_total_size - g_add < 16 && g_add % 16 == 0)
			file_error();
	}
	g_end--;
	if (g_end == 0)
	{
		tmp = ft_convert_base(g_add, BASE, HEX);
		ft_putchar('\n');
		i = g_n - ft_strlen(tmp);
		while (i--)
			ft_putchar('0');
		ft_putstr(tmp);
		ft_putchar('\n');
	}
}

static int	filelen(char *str)
{
	char	tmp;
	int		i;
	int		fd;

	i = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, &tmp, 1))
		i++;
	close(fd);
	return (i);
}

void		ft_display_hexdump(char *file)
{
	if (g_add == 0)
		g_total_size = 0;
	g_total_size = g_total_size + filelen(file);
	if (g_option)
	{
		g_n = 8;
		read_display(file, &hex_print_c);
	}
	else
	{
		g_n = 7;
		read_display(file, &hex_print);
	}
}
