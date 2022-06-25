/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:04:14 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/25 10:05:45 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libs.h"

typedef struct s_stack_a
{
	int				num;
	struct s_list	*prev;
	struct s_list	*next;

}					t_stack_a;

#endif