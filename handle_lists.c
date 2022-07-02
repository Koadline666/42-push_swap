/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:41:32 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/02 15:50:38 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_lst **lst, t_lst *new)
{
	t_lst	*tmp;

	if (*lst)
	{
		tmp = go_trough_list(*lst);
		tmp->next = &*new;
	}
	else
		*lst = new;
}

void	delete_one_node(t_lst **lst)
{
	t_lst	*tmp;

	tmp = (*lst)->next;
	free(*lst);
	*lst = tmp;
}

void	add_front(t_lst **lst, t_lst *new)
{
	if (*lst != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

t_lst	*lst_new(int data)
{
	t_lst	*new;

	new = NULL;
	new = malloc(sizeof(t_lst));
	if (new != NULL)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
