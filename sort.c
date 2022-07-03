/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:58:46 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/03 19:52:07 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks *stacks)
{
	if (is_sorted(&stacks->stack_a) == 0)
	{
		if (list_len(&stacks->stack_a) <= 3)
			sort_small_stack(stacks);
		else
			sort_big_stack(stacks);
	}
}
