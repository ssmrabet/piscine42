/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 21:08:24 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/01 21:15:10 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab1;
	int	i;

	i = 0;
	tab1 = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab1[i] = f(tab[i]);
		i++;
	}
	return (tab1);
}
