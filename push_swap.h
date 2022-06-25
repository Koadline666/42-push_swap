/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 17:15:07 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libs.h"

typedef struct s_stack_a
{
	int				num;
	struct s_list	*next;

}					t_stack_a;

typedef struct s_stack_b
{
	int				num;
	struct s_list	*next;

}					t_stack_b;

typedef struct s_stacks
{
	struct s_stack_a	stack_a;
	struct s_stack_b	stack_b;
	void				*head_a;
	void				*head_b;

}			t_stacks;

void	ft_error(void);
void	ft_free2(char **split);
void	check_input(char **input, t_stacks *stacks);
int		ft_atoi_ps(const char *str);
void	ft_create_stacks(t_stacks *stacks);
// linked lists
void	*create_new(void);



#endif