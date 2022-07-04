/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:57:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/04 15:09:08 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_b = NULL;
	if (argc > 1)
	{
		check_input(argv, &stacks);
		sort(&stacks);
	}
	deallocate_list(&stacks.stack_a);
	return (0);
}
