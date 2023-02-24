/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_to_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:29:54 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/24 18:42:16 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*stack_to_arr(t_stack *stack)
{
	int	*result;
	int	i;

	i = 0;
	result = malloc(ft_stack_size(stack) * sizeof(int));
	if (result)
	{
		while (stack)
		{
			result[i++] = ((t_content *)stack->content)->number;
			stack = stack->next;
		}
	}
	return (result);
}
