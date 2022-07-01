/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:55:46 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 19:49:37 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
