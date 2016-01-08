/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 20:59:25 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/21 12:55:58 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int min;
	int j;
	int x;
	int i;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		min = i;
		while (j <= size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		x = tab[i];
		tab[i] = tab[min];
		tab[min] = x;
		i++;
	}
}
