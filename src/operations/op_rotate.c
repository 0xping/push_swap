/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:15:22 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/12 15:02:25 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

// ra
// rb
void	op_rotate(t_stack **head)
{
	if (ft_stack_size(*head) > 1)
	{
	}
}

// rr
void	op_rr(t_stack **stack_a, t_stack **stack_b)
{
	op_rotate(stack_a);
	op_rotate(stack_b);
}
