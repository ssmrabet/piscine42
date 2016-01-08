/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:02:10 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/29 12:02:22 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*par;
	int			i;
	int			j;

	par = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		par[i].size_param = j;
		par[i].str = av[i];
		par[i].copy = (char*)malloc(sizeof(char) * (j + 1));
		par[i].copy[j] = '\0';
		while (j > 0)
		{
			j--;
			par[i].copy[j] = av[i][j];
		}
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
