/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 11:01:15 by salassam          #+#    #+#             */
/*   Updated: 2015/10/29 21:06:24 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1]) == 1 &&
			char_is_separator(str[i]) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *word, char *str)
{
	int	i;

	i = 0;
	while (char_is_separator(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	write_matrix(char **matrix, char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i]) == 0)
		{
			j = 0;
			while (char_is_separator(str[i + j]) == 0)
				j++;
			matrix[word] = (char*)malloc(sizeof(char) * (j + 1));
			write_word((matrix[word]), (str + i));
			word++;
			i += j;
		}
		else
			i++;
	}
	matrix[word] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	char	**matrix;
	int		count;

	count = count_words(str);
	matrix = (char**)malloc(sizeof(char*) * (count + 1));
	write_matrix(matrix, str);
	return (matrix);
}
