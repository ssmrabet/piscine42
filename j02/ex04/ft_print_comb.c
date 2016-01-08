/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 11:18:55 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/19 08:53:05 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 57)
	{
		if ((a < b) && (b < c))
			ft_print(a, b, c);
		if (c++ >= 57)
		{
			c = 48;
			b++;
		}
		if (b > 57)
		{
			b = 48;
			a++;
		}
	}
}
