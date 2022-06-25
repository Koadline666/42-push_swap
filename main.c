/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:57:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 17:13:23 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc > 1)
	{
		ft_create_stacks(&stacks);
		check_input(argv, &stacks);
	}
	// system("leaks push_swap");
	return (0);
}
