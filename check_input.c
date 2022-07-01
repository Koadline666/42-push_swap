/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:07:21 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 17:12:59 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_and_fill_each_arg(char *arg, t_stacks *stacks)
{
	int	i;

	i = ft_atoi_ps(arg, stacks);
	if (stacks->start == 1)
	{
		*stacks->stack_a = create_list(i);
		stacks->cur_a = *stacks->stack_a;
		stacks->start = 0;
	}
	else
		stacks->cur_a = add_to_end_of_list(stacks->cur_a, i);
}

void	check_input(char **input, t_stacks *stacks)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (input[i] != NULL)
	{
		j = 0;
		if (input[i][0] == '\0')
			ft_error(stacks);
		split = ft_split(input[i], ' ');
		if (split == NULL || split[0] == NULL)
			ft_error(stacks);
		while (split[j] != NULL)
		{
			check_and_fill_each_arg(split[j], stacks);
			j++;
		}
		i++;
		ft_free2(split);
	}
}
