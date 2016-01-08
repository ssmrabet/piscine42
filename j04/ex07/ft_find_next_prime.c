/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 20:10:23 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/22 11:55:04 by smrabet          ###   ########.fr       */
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
		return (nb);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int i;
	int r;

	r = 0;
	i = 1;
	r = ft_is_prime(nb);
	while (r == 0)
	{
		r = ft_is_prime(nb + i);
		i++;
	}
	return (r);
}
