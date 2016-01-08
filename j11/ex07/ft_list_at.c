/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 10:41:39 by smrabet           #+#    #+#             */
/*   Updated: 2015/11/26 11:54:34 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (0);
	while (begin_list && nbr > 0)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr == 0)
		return (begin_list);
	else
		return (0);
}
