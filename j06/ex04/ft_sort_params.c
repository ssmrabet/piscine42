/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 23:20:52 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/25 00:06:42 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	tri(char *tableau[], int taille)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (i < taille)
	{
		j = 0;
		while (j < taille)
		{
			if (ft_strcmp(tableau[i], tableau[j]) < 0)
			{
				tmp = tableau[i];
				tableau[i] = tableau[j];
				tableau[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	tri(argv++, argc--);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
