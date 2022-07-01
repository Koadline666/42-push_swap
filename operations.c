/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:37:45 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 20:13:47 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sl(t_lst **root)
{
	t_lst	*cur;
	int		tmp;

	cur = *root;
	if (cur != NULL && cur->next != NULL)
	{
		tmp = cur->content;
		cur->content = cur->next->content;
		cur->next->content = tmp;
		ft_printf("sl\n");
	}
}

void	rl(t_lst **root)
{
	t_lst	*cur;
	t_lst	*last;

	cur = *root;
	if(root != NULL && cur != NULL)
	{
		last = go_trough_list(cur);
		last->next = cur;
		*root = cur->next;
		cur->next = NULL;
		ft_printf("rl\n");
	}
}

void	rrl(t_lst **root)
{
	t_lst	*cur;
	t_lst	*last;

	cur = *root;
	if(root != NULL && cur != NULL)
	{
		last = go_trough_list(cur);
		last->next = cur;
		while(cur->next != last)
			cur = cur->next;
		cur->next = NULL;
		*root = last;
		ft_printf("rrl\n");
	}
}
