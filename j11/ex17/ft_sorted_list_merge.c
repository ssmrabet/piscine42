/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:42:09 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/10 16:42:36 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	sort(t_list **list, int (*cmp)())
{
	int		swap;
	t_list	*tmp;
	void	*data_tmp;

	tmp = *list;
	swap = 1;
	while (swap)
	{
		swap = 0;
		tmp = *list;
		while (tmp->next)
		{
			if (cmp(tmp->data, tmp->next->data) > 0)
			{
				data_tmp = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = data_tmp;
				swap = 1;
			}
			tmp = tmp->next;
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*tmp1;

	tmp1 = *begin_list1;
	if (tmp1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = begin_list2;
	sort(begin_list1, cmp);
	tmp1 = *begin_list1;
}
