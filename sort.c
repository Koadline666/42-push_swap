/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:58:46 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 19:28:38 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_lst **cur, char c)
{
	if ((*cur)->data > (*cur)->next->data && (*cur)->data > (*cur)->next->next->data)
		rl(cur, c);
	else if ((*cur)->data < (*cur)->next->data && (*cur)->next->data > (*cur)->next->next->data)
		rrl(cur, c);
	if ((*cur)->data > (*cur)->next->data)
		sl(cur, c);
}

void	sort_five(t_stacks *stacks)
{
	int	min;

	min = find_min(&stacks->stack_a);
	/*
		while list length is not 3
		{
			find min put to top
			push b
		}
		if (list length is 3)
			sort three
		push a
			<3
	*/
}
`
void	sort(t_stacks *stacks)
{
	int	len;

	if (is_sorted(&stacks->stack_a) == 1)
		return ;
	len = list_len(&stacks->stack_a);
	if (len == 2)
		ss(stacks);
	else if (len == 3)
		sort_three(&stacks->stack_a, 'a');
	else if (len == 5)
		sort_five(stacks);
	// while (1)
	// {
	// 	if (is_sorted(&stacks->stack_a) == 1)
	// 		break ;
	// }
}
