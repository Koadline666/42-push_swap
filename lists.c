/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:57:54 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 16:26:05 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*go_trough_list(t_lst *list)
{
	t_lst	*cur;

	cur = list;
	while (cur != NULL && cur->next != NULL)
	{
		cur = cur->next;
	}
	return (cur);
}

int	list_len(t_lst **root)
{
	t_lst	*cur;
	int		i;

	i = 0;
	cur = *root;
	while (root != NULL && cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_lst **root)
{
	t_lst	*cur;

	cur = *root;
	while (root != NULL && cur != NULL && cur->next != NULL)
	{
		if (cur->data > cur->next->data)
			return (0);
		cur = cur->next;
	}
	return (1);
}
