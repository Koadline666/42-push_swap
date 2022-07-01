/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 20:03:40 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libs.h"

typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;

typedef struct s_stacks
{
	t_lst	**stack_a;
	t_lst	*cur_a;
	t_lst	**stack_b;
	int		start;

}			t_stacks;

void	ft_error(t_stacks *stacks);
void	ft_free2(char **split);
void	read_list(t_lst **list);
void	check_input(char **input, t_stacks *stacks);
int		atoi_check(const char *str,  t_stacks *stacks);
// linked lists
t_lst	*create_list(int content);
t_lst	*add_next_node(t_lst *prev_node, int content);
void	deallocate_list(t_lst **root);
t_lst	*go_trough_list(t_lst *list);

// operations
void	sl(t_lst **root);
void	rl(t_lst **root);
void	rrl(t_lst **root);


#endif