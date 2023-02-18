/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:45:31 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/18 21:30:24 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// sa
// sb
void	op_swap(t_stack **head)
{
	void	*first_item_content;
	void	*second_item_content;

	if (ft_stack_size(*head) > 1)
	{
		first_item_content = ft_stack_peek(*head);
		ft_stack_pop(head, 0);
		second_item_content = ft_stack_peek(*head);
		ft_stack_pop(head, 0);
		ft_stack_push(head, first_item_content);
		ft_stack_push(head, second_item_content);
	}
}

// ss
void	op_ss(t_stack **stack_a, t_stack **stack_b)
{
	op_swap(stack_a);
	op_swap(stack_b);
}
