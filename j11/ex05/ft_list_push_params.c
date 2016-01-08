/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 21:43:51 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/10 15:02:55 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *begin_list;

	list = 0;
	begin_list = 0;
	if (ac > 0)
	{
		begin_list = ft_create_elem((void*)*(av + (ac - 1)));
		list = begin_list;
		ac--;
		while (ac > 0)
		{
			list->next = ft_create_elem((void*)*(av + (ac - 1)));
			list = list->next;
			ac--;
		}
	}
	return (begin_list);
}
