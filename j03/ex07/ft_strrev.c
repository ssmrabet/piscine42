/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 23:23:23 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/24 20:53:44 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int size;
	int i;
	int x;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (size > i)
	{
		x = str[i];
		str[i] = str[size];
		str[size] = x;
		i++;
		size--;
	}
	return (str);
}
