/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:55:24 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/22 11:53:14 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb > 1)
	{
		while (i <= (nb / 2))
		{
			if ((nb % i) == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}
