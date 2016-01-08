/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 13:31:18 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/15 13:46:25 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_files(char *file)
{
	int		fl;
	char	buf[2];
	int		size;

	size = 0;
	fl = open(file, O_RDONLY);
	while (read(fl, buf, 1))
		size++;
	close(fl);
	return (size);
}
