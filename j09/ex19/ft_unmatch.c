/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 12:42:25 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/23 12:50:54 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int r;

	r = 0;
	i = 0;
	while (i <= length)
	{
		j = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
				r++;
			j++;
		}
		if (r % 2 != 0)
			return (tab[i]);
		i++;
	}
	return (0);
}
