/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:57:54 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 20:05:57 by afenzl           ###   ########.fr       */
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

t_lst	*add_next_node(t_lst *prev_node, int content)
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

t_lst	*go_trough_list(t_lst *list)
{
	t_lst	*cur;

	cur = list;
	while(cur != NULL && cur->next != NULL)
	{
		cur = cur->next;
	}
	return(cur);
}

// untested and not used rn

// int	list_len(t_lst *list)
// {
// 	int	i;

// 	i = 0;
// 	while (list != NULL)
// 	{
// 		list = list->next;
// 		i++;
// 	}
// 	return (i);
// }


// void	add_front_list(t_lst **root, t_lst *new)
// {
// 	new->next = *root;
// 	*root = new;
// }
