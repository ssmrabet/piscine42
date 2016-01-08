/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:27:57 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/06 17:28:55 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap(char **tab, int i, int ac, int null)
{
	tab[null] = tab[i];
	tab[i] = tab[ac];
	tab[ac] = tab[null];
	tab[null] = NULL;
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int ac;
	int i;
	int null;

	ac = 0;
	while (tab[ac] != NULL)
		ac++;
	null = ac;
	ac--;
	while (ac > 0)
	{
		i = ac - 1;
		while (i >= 0)
		{
			if (cmp(tab[i], tab[ac]) > 0)
				ft_swap(tab, i, ac, null);
			i--;
		}
		ac--;
	}
}
