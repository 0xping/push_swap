/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:44:20 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/10 14:52:52 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// fillter stack <a> to contain only numbers that exist in <inc>
void	filter_stack(t_stack **a, t_stack **b, t_arr *inc)
{
	t_stack	*i;
	int		size;
	int		*arr;

	i = *a;
	size = ft_stack_size(*a);
	arr = stack_to_arr(*a);
	sort_int_tab(arr, size);
	while (i)
	{
		if (!includes(inc->arr, inc->size, ((t_content *)i->content)->number))
		{
			push_node_to_top(a, i, 'a');
			if (((t_content *)i->content)->number > arr[size / 2])
				op_push_to(a, b, "pb");
			else
			{
				op_push_to(a, b, "pb");
				op_rotate(b, "rb");
			}
			i = *a;
		}
		else
			i = i->next;
	}
}
