/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:36:47 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:36:50 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s) + 1;
	if ((dest = (char*)malloc(sizeof(char) * i)))
	{
		ft_strcpy(dest, s);
		return (dest);
	}
	return (NULL);
}
