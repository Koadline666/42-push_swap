/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:14:01 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/03 19:54:46 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_lst **root)
{
	t_lst	*cur;
	int		i;

	i = 0;
	cur = *root;
	while (cur != NULL)
	{
		if (i < cur->simp)
			i = cur->simp;
		cur = cur->next;
	}
	return (i);
}

int	get_bit_len(int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num = num >> 1;
		i++;
	}
	return (i);
}

void	radix_sort(t_stacks *stacks)
{
	int		max;
	int		i;
	int		len;
	int		j;
	
	i = 0;
	max = find_max(&stacks->stack_a);
	max = get_bit_len(max);
	len = list_len(&stacks->stack_a);
	while (i < max)
	{
		j = 0;
		while (j < len && is_sorted(&stacks->stack_a) != 1)
		{
			if (((stacks->stack_a->simp >> i) & 1) == 1)
				rl(&stacks->stack_a, 'a');
			else
				pb(stacks);
			j++;
		}
		while (stacks->stack_b != NULL)
			pa(stacks);
		i++;
	}
}

void	sort_big_stack(t_stacks *stacks)
{
	index_stack(stacks);
	radix_sort(stacks);
}
