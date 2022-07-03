/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:07:21 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/03 19:39:26 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_for_dup(t_stacks *stacks)
{
	t_lst	*cur;
	t_lst	*cmp;

	cur = stacks->stack_a;
	while (cur != NULL && cur->next != NULL)
	{
		cmp = cur->next;
		while (cmp != NULL)
		{
			if (cur->data == cmp->data)
				ft_error(stacks);
			cmp = cmp->next;
		}
		cur = cur->next;
	}
}

static long	ft_numcpy(int i, long res, char *p, t_stacks *stacks)
{
	while (p[i] != '\0')
	{
		if (p[i] >= '0' && p[i] <= '9')
		{
			res = res * 10 + p[i] - '0';
			i++;
			if (i > 11 && res > INT_MAX)
				ft_error(stacks);
		}
		else
			ft_error(stacks);
	}
	return (res);
}

int	atoi_check(const char *str, t_stacks *stacks)
{
	int				i;
	long			res;
	int				n;
	char			*p;

	i = 0;
	res = 0;
	n = 1;
	p = (char *)str;
	if (p[i] == '-' || p[i] == '+')
	{
		if (p[i + 1] == '\0')
			ft_error(stacks);
		if (p[i] == '-')
			n = -1;
		i++;
	}
	res = ft_numcpy(i, res, p, stacks);
	if ((res > INT_MAX && n == 1) || (res > 2147483648 && n == -1))
		ft_error(stacks);
	return (res * n);
}

void	check_and_fill_each_arg(char *arg, t_stacks *stacks)
{
	int	i;

	i = atoi_check(arg, stacks);
	add_back(&stacks->stack_a, lst_new(i, 0));
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
	check_for_dup(stacks);
}
