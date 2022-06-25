/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:57:54 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 17:17:49 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*create_new(void)
{
	t_stack_a	*head;

	head = NULL;
	head = malloc(sizeof(t_stack_a));
	if (head != NULL)
	{
		head->next = NULL;
	}
	return (head);
}

void	ft_create_stacks(t_stacks *stacks)
{
	stacks->head_a = create_new();
	stacks->head_b = create_new();
}
