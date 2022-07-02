/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pl.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:22:49 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 16:25:07 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stacks *stacks)
{
	write(1, "pb\n", 3);
	if (stacks->stack_a != NULL)
	{
		add_front(&stacks->stack_b, lst_new(stacks->stack_a->data));
		delete_one_node(&stacks->stack_a);
	}
}

void	pa(t_stacks *stacks)
{
	write(1, "pa\n", 3);
	if (stacks->stack_b != NULL)
	{
		add_front(&stacks->stack_a, lst_new(stacks->stack_b->data));
		delete_one_node(&stacks->stack_b);
	}
}
