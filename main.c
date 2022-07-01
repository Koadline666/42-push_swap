/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:57:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 20:16:05 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_list(t_lst **list)
{
	int		i;
	t_lst	*cur;

	i = 0;
	cur = *list;
	ft_printf("hey, thats in the list:\n");
	while (list != NULL && cur != NULL)
	{
		ft_printf("%i| ---> %i\n",i ,cur->content);
		cur = cur->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.start = 1;
	if (argc > 1)
	{
		stacks.stack_a = malloc(sizeof(t_list *));
		check_input(argv, &stacks);
		read_list(stacks.stack_a);
		sl(stacks.stack_a);
		read_list(stacks.stack_a);
		rl(stacks.stack_a);
		read_list(stacks.stack_a);
		rrl(stacks.stack_a);
		read_list(stacks.stack_a);
		// rrl(stacks.stack_a);
		// read_list(stacks.stack_a);
	}
	deallocate_list(stacks.stack_a);
	// read_list(stacks.stack_a);
	// system("leaks push_swap");
	// seems like the leaks were there before adding the lists (old_ps);
	return (0);
}
