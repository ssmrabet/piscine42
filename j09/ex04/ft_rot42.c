/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:07:40 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/22 23:41:02 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_condition(char *str, int i, char *a, char *b)
{
	int j;
	int r;

	j = 0;
	r = 0;
	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] = str[i] + 32;
		r = 1;
	}
	while (a[j] != str[i] && j < 26)
		j++;
	if (r == 1)
	{
		str[i] = b[j] - 32;
		r = 0;
	}
	else
		str[i] = b[j];
}

char	*ft_rot42(char *str)
{
	int i;
	char *a;
	char *b;

	a = "abcdefghijklmnopqrstuvwxyz";
	b = "qrstuvwxyzabcdefghijklmnop";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] <= 122))
			ft_condition(str, i, a, b);
		i++;
	}
	return (str);
}
