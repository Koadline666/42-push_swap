/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/27 20:55:07 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libs.h"

typedef struct s_stack
{
	int				num;
	struct s_list	*next;

}					t_stack;

typedef struct s_stacks
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	void	**head_a;
	void	**head_b;

}			t_stacks;

void	ft_error(void);
void	ft_free2(char **split);
void	check_input(char **input);
int		ft_atoi_ps(const char *str);
void	ft_create_stacks(t_stacks *stacks);
// linked lists

#endif