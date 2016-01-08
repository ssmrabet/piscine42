/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 00:41:07 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/31 00:41:08 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_nb_of_words(char const *s, char c)
{
	int			i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i += 1;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char		*ft_dup_word(char const *s, char c)
{
	char		*word;
	int			len;
	int			i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * len + 1);
	i = -1;
	while (++i < len)
		word[i] = s[i];
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			nb_of_w;
	int			i;

	nb_of_w = ft_nb_of_words(s, c);
	if (!s || !(tab = (char **)malloc(sizeof(char *) * nb_of_w + 1)))
		return (NULL);
	i = -1;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			tab[++i] = ft_dup_word(s, c);
		while (*s && *s != c)
			s++;
	}
	tab[++i] = NULL;
	return (tab);
}
