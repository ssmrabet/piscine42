/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:23:20 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/06 17:23:23 by smrabet          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (ft_strcmp(s1 + 1, s2 + 1));
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[i], tab[ac]) > 0)
				ft_swap(tab, i, ac, null);
			i--;
		}
		ac--;
	}
}
