/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:07:21 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/24 11:14:01 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_each_arg(char *arg)
{
	printf("hey this is arg |%s|\n", arg);
}

void	check_input(char **input)
{
	int	i;

	i = 0;
	while (input[i] != NULL)
	{
		check_each_arg(input[i]);
		i++;
	}
}