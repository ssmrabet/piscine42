/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:38:56 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:38:57 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	new_s = ft_strdup(s);
	while (new_s && new_s[i])
	{
		new_s[i] = f(i, new_s[i]);
		i++;
	}
	return (new_s);
}
