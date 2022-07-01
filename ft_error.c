/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:16:12 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 17:07:07 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stacks *stacks)
{
	write(1, "Error\n", 6);
	deallocate_list(stacks->stack_a);
	// system("leaks push_swap");
	exit(1);
}
