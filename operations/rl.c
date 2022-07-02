/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rl.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:37:45 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 18:04:00 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rl(t_lst **root, char c)
{
	t_lst	*cur;
	t_lst	*last;

	cur = *root;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if ('b')
		write(1, "rb\n", 3);
	if (root != NULL && cur != NULL)
	{
		last = go_trough_list(cur);
		last->next = cur;
		*root = cur->next;
		cur->next = NULL;
	}
}

void	rr(t_stacks *stacks)
{
	rl(&stacks->stack_a, 'r');
	rl(&stacks->stack_b, 'r');
	write(1, "rr\n", 3);
}

void	rrl(t_lst **root, char c)
{
	t_lst	*cur;
	t_lst	*last;

	if (c == 'a')
		write(1, "rra\n", 4);
	else if ('b')
		write(1, "rrb\n", 4);
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

void	rrr(t_stacks *stacks)
{
	write(1, "rrr\n", 4);
	rrl(&stacks->stack_a, 'r');
	rrl(&stacks->stack_b, 'r');
}
