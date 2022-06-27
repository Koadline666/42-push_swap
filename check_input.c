/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:07:21 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/27 20:35:51 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_each_arg(char *arg)
{
	int	i;

	printf("string:\n|%s|\n", arg);
	i = ft_atoi_ps(arg);
	printf("number:\n|%i|\n", i);
}

void	check_input(char **input)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (input[i] != NULL)
	{
		j = 0;
		if (input[i][0] == '\0')
			ft_error();
		split = ft_split(input[i], ' ');
		if (split == NULL || split[0] == NULL)
			ft_error();
		while (split[j] != NULL)
		{
			check_each_arg(split[j]);
			j++;
		}
		i++;
		ft_free2(split);
	}
}
