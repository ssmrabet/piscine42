/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 09:33:43 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/23 09:40:29 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if ((base % 2) == 0)
		return (ft_collatz_comjcture(base / 2));
	else
		return (ft_collatz(base * 3 + 1));
}
