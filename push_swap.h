/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 09:56:23 by afenzl           ###   ########.fr       */
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
	struct s_list	*prev;
	struct s_list	*next;

}					t_stack_a;

typedef struct s_stack_b
{
	int				num;
	struct s_list	*prev;
	struct s_list	*next;

}					t_stack_b;

void	ft_error(void);
void	ft_free2(char **split);
void	check_input(char **input);
int		ft_atoi_ps(const char *str);
void	ft_create_stack(void);

#endif