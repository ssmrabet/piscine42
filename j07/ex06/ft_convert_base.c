/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 10:49:48 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/02 10:49:53 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_search(char carac, char *base);
int		ft_strlen(char *str);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_bis(int *j, int *i, char *base_to, int n);

int		ft_atoi_base(char *str, char *base)
{
	int j;
	int signe;

	j = 0;
	signe = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_search(*str, base) != -1)
	{
		j = (j * ft_strlen(base)) + ft_search(*str, base);
		str++;
	}
	return (j * signe);
}

int		ft_search(char carac, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == carac)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		j;
	char	*res;
	int		i;

	j = 1;
	i = 0;
	nb = ft_atoi_base(nbr, base_from);
	ft_bis(&j, &i, base_to, nb);
	res = (char*)malloc(sizeof(char) * (i + ((nb < 0) ? 1 : 0)));
	i = (nb < 0) ? 1 : 0;
	res[0] = '-';
	j = (nb < 0) ? j * ft_strlen(base_to) : j;
	nb = (nb < 0) ? -nb : nb;
	while (j >= 1)
	{
		res[i] = base_to[(nb / j) % ft_strlen(base_to)];
		j /= ft_strlen(base_to);
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_bis(int *j, int *i, char *base_to, int n)
{
	while (n / *j > ft_strlen(base_to) - 1)
	{
		*j *= ft_strlen(base_to);
		(*i)++;
	}
}
