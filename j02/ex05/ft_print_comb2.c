/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 14:26:54 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/19 08:52:31 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(char x, char y, char a, char b)
{
	while (a <= 57)
	{
		if (b < 58)
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(' ');
			ft_putchar(a);
			ft_putchar(b);
			if (!(x == 57 && y == 56 && a == 57 && b == 57))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (b++ >= 57)
		{
			b = 48;
			a++;
		}
	}
}

void	ft_print_comb2(void)
{
	char x;
	char y;
	char a;
	char b;

	x = 48;
	y = 48;
	a = x;
	b = y + 1;
	while (x <= 57)
	{
		a = x;
		b = y + 1;
		ft_print_comb(x, y, a, b);
		if (y++ >= 57)
		{
			y = 48;
			x++;
		}
	}
}
