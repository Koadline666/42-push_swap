/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rl.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:37:45 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/05 13:29:42 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rl_bonus(t_lst **root)
{
	t_lst	*cur;
	t_lst	*last;

	cur = *root;
	if (root != NULL && cur != NULL)
	{
		last = go_trough_list(cur);
		last->next = cur;
		*root = cur->next;
		cur->next = NULL;
	}
}

void	rr_bonus(t_stacks *stacks)
{
	rl_bonus(&stacks->stack_a);
	rl_bonus(&stacks->stack_b);
}

void	rrl_bonus(t_lst **root)
{
	t_lst	*cur;
	t_lst	*last;

	cur = *root;
	if (root != NULL && cur != NULL)
	{
		last = go_trough_list(cur);
		last->next = cur;
		while (cur->next != last)
			cur = cur->next;
		cur->next = NULL;
		*root = last;
	}
}

void	rrr_bonus(t_stacks *stacks)
{
	rrl_bonus(&stacks->stack_a);
	rrl_bonus(&stacks->stack_b);
}
