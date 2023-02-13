/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:45:31 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 09:57:58 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// sa
// sb
void	op_swap(t_stack **head)
{
	t_stack	*node1;
	t_stack	*node2;

	if (ft_stack_size(*head) > 1)
	{
		node1 = ft_stack_peek(*head);
		ft_stack_pop(head, 0);
		node2 = ft_stack_peek(*head);
		ft_stack_push(head, node1->content);
		ft_stack_push(head, node2->content);
	}
}

// ss
void	op_ss(t_stack **stack_a, t_stack **stack_b)
{
	op_swap(stack_a);
	op_swap(stack_b);
}
