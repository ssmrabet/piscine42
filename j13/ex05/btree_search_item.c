/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 21:23:43 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/18 14:07:12 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	if (!(root))
		return (0);
	btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)(data_ref, (*root).item) == 0)
		return (root->item);
	btree_search_item((root)->right, data_ref, cmpf);
	return (0);
}
