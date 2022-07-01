/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:57:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 17:22:55 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_list(t_lst *list)
{
	int	i;

	i = 0;
	ft_printf("hey, thats in the list:\n");
	while (list != NULL)
	{
		ft_printf("%i| ---> %i\n",i , list->content);
		list = list->next;
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
		// i probably need to free that too
		check_input(argv, &stacks);
		read_list(*stacks.stack_a);
	}
	deallocate_list(stacks.stack_a);
	read_list(*stacks.stack_a);
	// system("leaks push_swap");
	// seems like the leaks were there before adding the lists (old_ps);
	return (0);
}
