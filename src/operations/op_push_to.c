/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:16:36 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 10:03:50 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// pa
// pb
void	op_push_to(t_stack **from, t_stack **to)
{
	t_stack	*node;

	if (!ft_stack_isempty(*from))
	{
		node = ft_stack_peek(*from);
		ft_stack_pop(from, 0);
		ft_stack_push(to, node->content);
	}
}
