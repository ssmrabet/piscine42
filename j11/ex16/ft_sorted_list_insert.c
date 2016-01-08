/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:11:43 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/10 15:40:28 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_insert(int (*cmp)(), t_list **tmp1, t_list **tmp2, void *data)
{
	t_list	*elem;

	if ((*cmp)((*tmp2)->data, data) > 0)
	{
		elem = ft_create_elem(data);
		(*tmp1)->next = elem;
		elem->next = *tmp2;
		return (1);
	}
	return (0);
}

int		ft_insert_first(int (*cmp)(), t_list **begin_list,
		t_list **tmp1, void *data)
{
	if ((*cmp)((*begin_list)->data, data) > 0)
	{
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = *tmp1;
		return (1);
	}
	return (0);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	tmp1 = *begin_list;
	tmp2 = tmp1->next;
	if (ft_insert_first(cmp, begin_list, &tmp1, data))
		return ;
	while (tmp2)
	{
		if (ft_insert(cmp, &tmp1, &tmp2, data))
			return ;
		tmp1 = tmp1->next;
		tmp2 = tmp1->next;
	}
	tmp1->next = ft_create_elem(data);
}
