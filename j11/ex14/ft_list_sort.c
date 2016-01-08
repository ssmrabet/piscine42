/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:34:55 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/12 12:42:01 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		swap;
	t_list	*tmp;
	void	*data_tmp;

	swap = 1;
	if (*begin_list == 0)
		return ;
	while (swap)
	{
		swap = 0;
		tmp = *begin_list;
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
