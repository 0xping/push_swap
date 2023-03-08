/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:59:54 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/08 11:20:03 by aait-lfd         ###   ########.fr       */
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

void sort_3(t_stack **stack)
{
	int *a = stack_to_arr(*stack);

	if (!((a[2] < a[0] && a[0] < a[1]) || ( a[1] < a[2] &&  a[2] < a[0])) && !is_sorted(*stack))
		op_swap(stack, "sa");
	push_node_to_top(stack,get_min(*stack),'a');
	free(a);
}

void sort_5(t_stack **a, t_stack **b)
{
	op_push_to(a,b,"pb");
	op_push_to(a,b,"pb");
	int *arr = stack_to_arr(*a);
	if (!((arr[2] < arr[0] && arr[0] < arr[1]) || ( arr[1] < arr[2] &&  arr[2] < arr[0])) && !is_sorted(*a))
		op_swap(a, "sa");
	free(arr);
	sort(a,b);
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
		b = 0;
		if(ft_stack_size(a) == 3)
			sort_3(&a);
		else if(ft_stack_size(a) == 5)
			sort_5(&a,&b);
		else
		{
			tmp = parse_arguments(ac, av);
			push_node_to_top(&tmp, get_min(tmp), 0);
			lis = get_lis(stack_to_arr(tmp), ft_stack_size(tmp));
			filter_stack(&a, &b, lis);
			sort(&a, &b);
		}
	}
	return (0);
}
