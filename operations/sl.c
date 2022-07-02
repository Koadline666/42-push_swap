/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:21:10 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 18:16:06 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sl(t_lst **root, char c)
{
	t_lst	*cur;
	int		tmp;

	cur = *root;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
	if (cur != NULL && cur->next != NULL)
	{
		tmp = cur->data;
		cur->data = cur->next->data;
		cur->next->data = tmp;
	}
}

void	ss(t_stacks *stacks)
{
	sl(&stacks->stack_a, 's');
	sl(&stacks->stack_b, 's');
	write(1, "ss\n", 3);
}
