/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:21:10 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/05 13:29:10 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sl_bonus(t_lst **root)
{
	t_lst	*cur;
	int		tmp;

	cur = *root;
	if (cur != NULL && cur->next != NULL)
	{
		tmp = cur->data;
		cur->data = cur->next->data;
		cur->next->data = tmp;
	}
}

void	ss_bonus(t_stacks *stacks)
{
	sl_bonus(&stacks->stack_a);
	sl_bonus(&stacks->stack_b);
}
