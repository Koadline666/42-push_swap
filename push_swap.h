/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/01 16:38:59 by afenzl           ###   ########.fr       */
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

void	ft_error(void);
void	ft_free2(char **split);
void	read_list(t_lst *list);
void	check_input(char **input, t_stacks *stacks);
int		ft_atoi_ps(const char *str);
// linked lists
t_lst	*lstnew(int content);
t_lst	*ft_lst_node_add_end(t_lst *prev_node, int content);
void	deallocate_list(t_lst **root);


#endif