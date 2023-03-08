/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:53:14 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/07 13:53:27 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	n;

	n = ((t_content *)stack->content)->number;
	stack = stack->next;
	while (stack)
	{
		if (n > ((t_content *)stack->content)->number)
			return (0);
		n = ((t_content *)stack->content)->number;
		stack = stack->next;
	}
	return (1);
}