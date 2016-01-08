/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:20:34 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/06 17:20:37 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		c = '0' + nb;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = '0' + nb % 10;
	}
	ft_putchar(c);
}
