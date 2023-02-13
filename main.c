/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:59:54 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 17:53:23 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	print_stack(void *content)
{
	printf("%d\n", ((t_content *)content)->number);
}

int	main(int ac, char const *av[])
{
	t_stack	*stack_a;

	//t_stack	*stack_b;
	stack_a = parse_arguments(ac, av);
	ft_stack_iter(stack_a, print_stack);
}
