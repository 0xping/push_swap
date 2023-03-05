/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:59:54 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/05 03:49:56 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// void	print_stack(t_stack *stack)
// {
// 	printf("----------------- STACK ---------------\n");
// 	for (; stack; stack = stack->next)
// 		printf("> %d \n", ((t_content *)stack->content)->number);
// }

void	sort(t_stack **a, t_stack **b)
{
	set_moves(a, b);
	while (ft_stack_size(*b))
	{
		exec_move(a, b, get_best_move(*b));
		set_moves(a, b);
	}
	push_node_to_top(a, get_min(*a), 'a');
}

int	main(int ac, char const *av[])
{
	t_stack	*a;
	t_stack	*b;
	t_arr	*lis;
	t_stack	*tmp;

	if (ac > 1)
	{
		a = parse_arguments(ac, av);
		tmp = parse_arguments(ac, av);
		b = 0;
		push_node_to_top(&tmp, get_min(tmp), 0);
		lis = get_lis(stack_to_arr(tmp), ft_stack_size(tmp));
		filter_stack(&a, &b, lis);
		sort(&a, &b);
	}
	return (0);
}

//-158 548 146 122 -33
//  bash push_swap_tester/tester.sh ../push_swap 100 100