/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:06:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/03 20:53:49 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print2(int *arr, int len)
{
	int	i;

	i = 0;
	ft_printf("thats what is in the array:\t");
	while (len--)
	{
		ft_printf("%i", arr[i]);
		i++;
	}
	ft_printf("\n");
}

int	*fill_arr(t_lst **root)
{
	t_lst	*cur;
	int		*arr;
	int		i;

	i = 0;
	cur = *root;
	arr = malloc(list_len(root) * sizeof(int));
	if (arr != NULL)
	{
		while (cur != NULL)
		{
			arr[i] = cur->data;
			cur = cur->next;
			i++;
		}
	}
	return (arr);
}

int	*bubble_sort(int *arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < len)
	{
		i = 0;
		while (i < (len - 1))
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
	return (arr);
}

void	index_stack(t_stacks *stacks)
{
	t_lst	*cur;
	int		*arr;
	int		i;

	i = 0;
	arr = fill_arr(&stacks->stack_a);
	arr = bubble_sort(arr, list_len(&stacks->stack_a));
	while (i < list_len(&stacks->stack_a))
	{
		cur = stacks->stack_a;
		while (cur != NULL)
		{
			if (cur->data == arr[i])
				cur->simp = i;
			cur = cur->next;
		}
		i++;
	}
	if (arr != NULL)
		free(arr);
}
