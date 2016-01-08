/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:41:30 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:41:31 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;

	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!new_s)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(new_s, s, len);
	new_s[len] = '\0';
	return (new_s);
}
