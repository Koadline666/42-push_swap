/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:05:57 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 10:29:29 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libs.h"

typedef struct s_stack_a
{
	int					num;
	struct s_stack_a	*next;

}					t_stack_a;

t_stack_a	*create_new(int i)
{
	t_stack_a	*head;

	head = NULL;
	head = malloc(sizeof(t_stack_a));
	if (head != NULL)
	{
		head->num = i;
		head->next = NULL;
	}
	return (head);
}



int	main(void)
{
	t_stack_a	*head;
	int			i;

	i = 9;
	head = create_new(i);
	return (0);
}
