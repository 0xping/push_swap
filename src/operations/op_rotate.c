/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:15:22 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/18 18:47:10 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// ra
// rb
void	op_rotate(t_stack **head)
{
	void	*top_content;

	if (ft_stack_size(*head) > 1)
	{
		top_content = ft_stack_peek(*head);
		ft_stack_pop(head, 0);
		ft_lstadd_back((t_list **)head, (t_list *)ft_stack_new(top_content));
	}
}

// rr
void	op_rr(t_stack **stack_a, t_stack **stack_b)
{
	op_rotate(stack_a);
	op_rotate(stack_b);
}
