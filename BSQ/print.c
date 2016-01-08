/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 11:58:12 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/28 21:02:14 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		disp_bsq(char *file, t_max *max, int nb_lines, int nb_cols)
{
	char	*tmp;
	int		fd;
	int		i;

	i = 1;
	if ((nb_cols = go_first_line(file, &fd)) == -1)
		return (-1);
	if ((tmp = (char*)malloc(sizeof(char) * (nb_cols + 1))) == NULL)
		return (-1);
	tmp[nb_cols++] = 0;
	while (i <= nb_lines)
	{
		if ((read(fd, tmp, nb_cols)) < 0)
			return (-1);
		if (i++ <= max->y_max - max->size || i - 1 > max->y_max)
			write(1, tmp, nb_cols);
		else
			print_line(tmp, max, nb_cols);
	}
	free(tmp);
	return (fd);
}
