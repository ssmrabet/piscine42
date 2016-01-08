/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:40:13 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:40:14 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_s;

	new_s = (char *)malloc(sizeof(char) * size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_s[i] = '\0';
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
