/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:14:59 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/05 02:18:49 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//get node with content n,if not exist return 0
t_stack	*get_node(t_stack *stack, int n)
{
	while (stack)
	{
		if (n == ((t_content *)stack->content)->number)
			return (stack);
		stack = stack->next;
	}
	return (0);
}

t_stack	*get_min(t_stack *stack)
{
	t_stack	*min;
	int		n;

	min = stack;
	while (stack)
	{
		n = ((t_content *)stack->content)->number;
		if (n < ((t_content *)min->content)->number)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_stack	*get_max(t_stack *stack)
{
	t_stack	*max;
	int		n;

	max = stack;
	while (stack)
	{
		n = ((t_content *)stack->content)->number;
		if (n > ((t_content *)max->content)->number)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
