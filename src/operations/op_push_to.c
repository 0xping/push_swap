/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:16:36 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/19 17:30:41 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// pa
// pb
void	op_push_to(t_stack **from, t_stack **to, char *op)
{
	void	*top_content;

	if (!ft_stack_isempty(*from))
	{
		top_content = ft_stack_peek(*from);
		ft_stack_pop(from, 0);
		ft_stack_push(to, top_content);
		ft_stack_iter(*from, set_index);
		set_index(0);
		ft_stack_iter(*to, set_index);
		set_index(0);
	}
	ft_putendl_fd(op, 1);
}
