/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:17:20 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/28 21:39:35 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
// rra
// rrb
void	op_rrotate(t_stack **head, char *op)
{
	t_stack	*tmp;
	void	*last_item_content;

	tmp = 0;
	if (ft_stack_size(*head) > 1)
	{
		while (!ft_stack_isempty(*head))
		{
			if (ft_stack_size(*head) == 1)
				last_item_content = ft_stack_peek(*head);
			else
				ft_stack_push(&tmp, ft_stack_peek(*head));
			ft_stack_pop(head, 0);
		}
		while (!ft_stack_isempty(tmp))
		{
			ft_stack_push(head, ft_stack_peek(tmp));
			ft_stack_pop(&tmp, 0);
		}
		ft_stack_push(head, last_item_content);
		ft_stack_iter(*head, set_index);
		set_index(0);
	}
	if (op)
		ft_putendl_fd(op, 1);
}

//rrr
void	op_rrr(t_stack **stack_a, t_stack **stack_b)
{
	op_rrotate(stack_a, 0);
	op_rrotate(stack_b, 0);
	ft_putendl_fd("rrr", 1);
}
