/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:12:09 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/26 16:35:15 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ret;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] == str[i + j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				ret = &str[i];
				return (ret);
			}
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
