/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:38:46 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:38:47 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	new_s = ft_strdup(s);
	if (!s || !f || !new_s)
		return (NULL);
	i = -1;
	while (new_s && new_s[++i])
		new_s[i] = f(new_s[i]);
	new_s[i] = '\0';
	return (new_s);
}
