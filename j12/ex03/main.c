/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 16:26:55 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/24 16:32:35 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	g_add;
int	g_option;
int	g_end;

int	main(int argc, char **argv)
{
	g_add = 0;
	if (!(ft_strcmp(argv[1], "-C")))
		g_option = 1;
	else
		g_option = 0;
	g_end = argc - 1 - g_option;
	hexdump(argv);
	return (0);
}
