/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:41:19 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:41:21 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	size;

	if (*s2 == '\0')
		return ((char *)s1);
	size = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, size) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
