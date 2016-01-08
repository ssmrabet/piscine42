/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:02:37 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/29 12:06:44 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

t_stock_par		*ft_param_to_tab(int ac, char **av);
char			**ft_split_whitespaces(char *str);
void			ft_print_words_tables(char **tab);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
#endif
