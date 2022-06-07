/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:35 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/07 18:12:30 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "no parameters lad\n", 18);
		exit(-1);
	}
	else
	{
		if (ft_check_input(argv) == -1)
		{
			printf("incorrect input lad\n");
			exit (1);
		}
		printf("good input yamyam ^-^\n");
	}
	return (0);
}
