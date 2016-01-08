/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:22:13 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/06 17:22:16 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			add(int vi, int vj);
void			minus(int vi, int vj);
void			mod(int vi, int vj);
void			div(int vi, int vj);
void			mul(int vi, int vj);

typedef struct	s_op
{
	int			vi;
	int			vj;
}				t_op;

#endif
