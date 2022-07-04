/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:49:47 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/04 15:04:44 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error_cmd(t_stacks *stacks, char *cmd)
{
	write(1, "Error\n", 6);
	free(cmd);
	deallocate_list(&stacks->stack_a);
	exit(1);
}

void	do_the_cmd(char *cmd, t_stacks *stacks)
{
	if (ft_strcmp(cmd, "sa\n") == 0)
		sl(&stacks->stack_a, 'a');
	else if (ft_strcmp(cmd, "sb\n") == 0)
		sl(&stacks->stack_b, 'b');
	else if (ft_strcmp(cmd, "ss\n") == 0)
		ss(stacks);
	else if (ft_strcmp(cmd, "pa\n") == 0)
		pa(stacks);
	else if (ft_strcmp(cmd, "pb\n") == 0)
		pb(stacks);
	else if (ft_strcmp(cmd, "ra\n") == 0)
		rl(&stacks->stack_a, 'a');
	else if (ft_strcmp(cmd, "rb\n") == 0)
		rl(&stacks->stack_b, 'b');
	else if (ft_strcmp(cmd, "rr\n") == 0)
		rr(stacks);
	else if (ft_strcmp(cmd, "rra\n") == 0)
		rrl(&stacks->stack_a, 'a');
	else if (ft_strcmp(cmd, "rrb\n") == 0)
		rrl(&stacks->stack_b, 'b');
	else if (ft_strcmp(cmd, "rrr\n") == 0)
		rr(stacks);
	else
		ft_error_cmd(stacks, cmd);
}

void	exec_cmds(t_stacks *stacks)
{
	char	*cmd;

	cmd = "";
	while (cmd != NULL)
	{
		cmd = get_next_line(0);
		if (cmd != NULL)
		{
			do_the_cmd(cmd, stacks);
			free(cmd);
		}
	}
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc > 1)
	{
		check_input(argv, &stacks);
		exec_cmds(&stacks);
		if (is_sorted(&stacks.stack_a) == 1 && stacks.stack_b == NULL)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		deallocate_list(&stacks.stack_a);
	}
}
