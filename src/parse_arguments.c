/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:09:49 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/19 16:01:55 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	check_duplicates(t_stack *stack)
{
	t_stack		*i;
	t_stack		*j;
	t_content	*i_content;
	t_content	*j_content;

	i = stack;
	while (i)
	{
		j = i->next;
		i_content = i->content;
		while (j)
		{
			j_content = (t_content *)j->content;
			if (i_content->number == j_content->number)
				ft_exit();
			j = j->next;
		}
		i = i->next;
	}
}

static int	arg_to_int(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		(str[i] == '-') && (sign *= -1);
		i++;
	}
	(str[i] == 0) && (ft_exit());
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if ((result > 2147483647 && sign == 1) || (result > 2147483648
				&& sign == -1))
			ft_exit();
		i++;
	}
	(str[i] != 0) && (ft_exit());
	return (result * sign);
}

static void	get_ints(t_stack **head, char const *el)
{
	t_content	*content;
	char		**ints;
	int			i;

	i = 0;
	ints = ft_split(el, ' ');
	while (ints[i + 1])
		i++;
	while (i >= 0)
	{
		content = malloc(sizeof(t_content));
		if (content)
		{
			content->number = arg_to_int(ints[i]);
			ft_stack_push(head, content);
		}
		i--;
	}
	free_tab(ints);
}

t_stack	*parse_arguments(int ac, char const *av[])
{
	t_stack	*stack;
	char	*argument;

	stack = 0;
	argument = 0;
	while (ac > 1)
	{
		argument = ft_strtrim(av[ac - 1], " ");
		(!ft_strlen(argument)) && ft_exit();
		get_ints(&stack, argument);
		free(argument);
		ac--;
	}
	check_duplicates(stack);
	return (stack);
}
