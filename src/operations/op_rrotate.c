/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:17:20 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/18 20:43:02 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"
#include "operations.h"
// rra
// rrb
void	op_rrotate(t_stack **head)
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
	}
}

//rrr
void	op_rrr(t_stack **stack_a, t_stack **stack_b)
{
	op_rrotate(stack_a);
	op_rrotate(stack_b);
}
