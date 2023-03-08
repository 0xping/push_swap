/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:20:28 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/07 13:52:56 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	exec_operation(t_stack **a, t_stack **b, char *op)
{
	if (!ft_strcmp(op, "sa\n"))
		op_swap(a);
	else if (!ft_strcmp(op, "sb\n"))
		op_swap(b);
	else if (!ft_strcmp(op, "ss\n"))
		op_ss(a, b);
	else if (!ft_strcmp(op, "pa\n"))
		op_push_to(b, a);
	else if (!ft_strcmp(op, "pb\n"))
		op_push_to(a, b);
	else if (!ft_strcmp(op, "ra\n"))
		op_rotate(a);
	else if (!ft_strcmp(op, "rb\n"))
		op_rotate(b);
	else if (!ft_strcmp(op, "rr\n"))
		op_rr(a, b);
	else if (!ft_strcmp(op, "rra\n"))
		op_rrotate(a);
	else if (!ft_strcmp(op, "rrb\n"))
		op_rrotate(b);
	else if (!ft_strcmp(op, "rrr\n"))
		op_rrr(a, b);
	else
		return (0);
	return (1);
}

void	print_state(t_stack *a, t_stack *b)
{
	if (ft_stack_isempty(b) && is_sorted(a))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

int	main(int ac, char const *av[])
{
	t_stack	*a;
	t_stack	*b;
	char	*op;

	if (ac > 1)
	{
		a = parse_arguments(ac, av);
		b = 0;
		op = get_next_line(0);
		while (op)
		{
			if (exec_operation(&a, &b, op))
			{
				free(op);
				op = get_next_line(0);
			}
			else
			{
				free(op);
				ft_exit();
			}
		}
		print_state(a, b);
	}
	return (0);
}
