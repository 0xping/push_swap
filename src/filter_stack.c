/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:44:20 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/05 03:47:42 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// fillter stack <a> to contain only numbers that exist in <inc>
void	filter_stack(t_stack **a, t_stack **b, t_arr *inc)
{
	t_stack	*i;

	i = *a;
	while (i)
	{
		if (!includes(inc->arr, inc->size, ((t_content *)i->content)->number))
		{
			push_node_to_top(a, i, 'a');
			op_push_to(a, b, "pb");
			i = *a;
		}
		else
			i = i->next;
	}
}
