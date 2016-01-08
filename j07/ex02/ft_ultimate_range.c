/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 10:43:57 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/28 12:46:16 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		*range = NULL;
	else
	{
		tab = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
	}
	return (i);
}
