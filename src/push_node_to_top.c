/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node_to_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:30:07 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/26 22:41:36 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_node_to_top(t_stack **head, t_stack *node, char stack_name)
{
	int		is_rotate;
	char	*op[2];

	is_rotate = ((t_content *)node->content)->index < ft_stack_size(*head)
		- (((t_content *)node->content)->index + 1);
	if (stack_name == 'a')
	{
		op[0] = "ra";
		op[1] = "rra";
	}
	else
	{
		op[0] = "rb";
		op[1] = "rrb";
	}
	while (((t_content *)(*head)->content)->number != ((t_content *)node->content)->number)
	{
		if (is_rotate)
			op_rotate(head, op[0]);
		else
			op_rrotate(head, op[1]);
	}
}
