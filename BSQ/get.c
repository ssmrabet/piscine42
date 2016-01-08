/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:16:02 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/29 17:09:22 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_nb_cols(char *file)
{
	int		fd;
	char	tmp;
	int		i;

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		i = i + 1;
	if ((close(fd)) == -1)
		return (-1);
	return (i);
}

int		go_first_line(char *file, int *fd)
{
	char	tmp;
	int		i;

	i = 0;
	tmp = 0;
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	tmp = 0;
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		i = i + 1;
	if ((close(*fd)) == -1)
		return (-1);
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	tmp = 0;
	while (read(*fd, &tmp, 1) > 0 && tmp != '\n')
		continue ;
	return (i);
}
