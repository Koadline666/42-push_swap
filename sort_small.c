/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:09:00 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/27 12:55:51 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_lst **root)
{
	t_lst	*cur;
	int		i;

	cur = *root;
	i = cur->data;
	while (cur != NULL)
	{
		if (i > cur->data)
			i = cur->data;
		cur = cur->next;
	}
	return (i);
}

int	place_of_min(t_lst **root)
{
	t_lst	*cur;
	int		place;
	int		min;

	cur = *root;
	place = 1;
	min = find_min(root);
	while (cur != NULL && cur->data != min)
	{
		cur = cur->next;
		place++;
	}
	return (place);
}

void	sort_three(t_lst **cur, char c)
{
	if ((*cur)->data > (*cur)->next->data
		&& (*cur)->data > (*cur)->next->next->data)
		rl(cur, c);
	else if ((*cur)->data < (*cur)->next->data
		&& (*cur)->next->data > (*cur)->next->next->data)
		rrl(cur, c);
	if ((*cur)->data > (*cur)->next->data)
		sl(cur, c);
}

void	sort_small_stack(t_stacks *stacks)
{
	if (list_len(&stacks->stack_a) == 2)
	{
		sl(&stacks->stack_a, 'a');
		return ;
	}
	while (list_len(&stacks->stack_a) != 3)
	{
		if (place_of_min(&stacks->stack_a) < (list_len(&stacks->stack_a) / 2))
		{
			while (place_of_min(&stacks->stack_a) != 1)
				rl(&stacks->stack_a, 'a');
		}
		else
			while (place_of_min(&stacks->stack_a) != 1)
				rrl(&stacks->stack_a, 'a');
		pb(stacks);
	}
	sort_three(&stacks->stack_a, 'a');
	while (stacks->stack_b != NULL)
		pa(stacks);
}
