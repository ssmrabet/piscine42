/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:07:32 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/15 14:01:26 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(char *file, int no)
{
	if (no != 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (no == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_puterr(argv[i], ft_cat(argv[i]));
			i++;
		}
		return (0);
	}
	else
		return (1);
}
