/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:57:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/03 16:19:29 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_lst *list_a, t_lst *list_b)
{
	int		i;

	i = 0;
	ft_printf("INDEX\t\tA\tSimpA\t\tB\tSimpB\n");
	while (list_a != NULL)
	{
		ft_printf("%d\t\t", i);
		if (list_a != NULL)
		{
			ft_printf("%d\t\t\t", (list_a)->data);
			list_a = (list_a)->next;
		}
		if (list_b != NULL)
		{
			ft_printf("%d\t", (list_b)->data);
			list_b = (list_b)->next;
		}
		write(1, "\n", 1);
		i++;
	}
	while (list_b != NULL)
	{
		ft_printf("%d \t\t \t \t\t%d\t\n", i, (list_b)->data);
		i++;
		list_b = (list_b)->next;
	}
}

void	test_operators(t_stacks *stacks)
{
	print_list(stacks->stack_a, stacks->stack_b);
	printf("==============================================================\n");
	pa(stacks);
	pa(stacks);
	pa(stacks);
	print_list(stacks->stack_a, stacks->stack_b);
	printf("==============================================================\n");
	rrl(&stacks->stack_a, 'a');
	print_list(stacks->stack_a, stacks->stack_b);
	printf("==============================================================\n");
	rl(&stacks->stack_a, 'a');
	print_list(stacks->stack_a, stacks->stack_b);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_b = NULL;
	if (argc > 1)
	{
		check_input(argv, &stacks);
		// test_operators(&stacks);
		// print_list(stacks.stack_a, stacks.stack_b);
		// print_list(stacks.stack_a, stacks.stack_b);
		sort(&stacks);
		printf("the list is sorted: %i\n", is_sorted(&stacks.stack_a));
	}
	deallocate_list(&stacks.stack_a);
	return (0);
}

// void	read_list(t_lst **root)
// {
// 	int		i;
// 	t_lst	*cur;

// 	i = 0;
// 	cur = *root;
// 	ft_printf("hey, thats in the list:\n");
// 	while (root != NULL && cur != NULL)
// 	{
// 		ft_printf("%i| ---> %i\n", i, cur->data);
// 		cur = cur->next;
// 		i++;
// 	}
// }