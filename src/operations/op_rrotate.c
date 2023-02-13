/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:17:20 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/12 15:02:39 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// rra
// rrb
void	op_rrotate(t_stack **head)
{
	if (ft_stack_size(*head) > 1)
	{
	}
}

//rrr
void	op_rrr(t_stack **stack_a, t_stack **stack_b)
{
	op_rrotate(stack_a);
	op_rrotate(stack_b);
}