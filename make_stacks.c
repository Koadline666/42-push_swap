/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:57:54 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 17:10:54 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*create_list(int content)
{
	t_lst	*new;

	new = NULL;
	new = malloc(sizeof(t_lst));
	if (new != NULL)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_lst	*add_to_end_of_list(t_lst *prev_node, int content)
{
	t_lst	*new;

	new = NULL;
	if (prev_node == NULL)
	{
		ft_printf("prev is NULL!\n");
		return (NULL);
	}
	new = malloc(sizeof(t_lst));
	if (new != NULL)
	{
		prev_node->next = new;
		new->content = content;
		new->next = NULL;
	}
	return (new);
}