/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:44:52 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/05 03:59:20 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	get_target_pos(t_stack *stack, int n)
{
	int	*arr;
	int	size;
	int	i;

	arr = stack_to_arr(stack);
	size = ft_stack_size(stack);
	if (arr[size - 1] < n && n < arr[0])
	{
		free(arr);
		return (0);
	}
	i = 0;
	while (i < size - 1)
	{
		if (arr[i] < n && n < arr[i + 1])
		{
			free(arr);
			return (i + 1);
		}
		i++;
	}
	free(arr);
	return (((t_content *)get_max(stack)->content)->index + 1);
}

static void	rr_rrr(t_stack **a, t_stack **b, int *moves)
{
	int	i;

	i = abs(moves[0]);
	if (abs(moves[1]) < abs(moves[0]))
		i = abs(moves[1]);
	while (i)
	{
		if (moves[0] > 0 && moves[1] > 0)
		{
			op_rr(a, b);
			moves[0]--;
			moves[1]--;
		}
		else
		{
			op_rrr(a, b);
			moves[0]++;
			moves[1]++;
		}
		i--;
	}
}

void	exec_move(t_stack **a, t_stack **b, int *moves)
{
	int	i;

	if (moves[0] * moves[1] > 0)
		rr_rrr(a, b, moves);
	i = 0;
	while (i < abs(moves[0]))
	{
		if (moves[0] > 0)
			op_rotate(a, "ra");
		else if (moves[0] < 0)
			op_rrotate(a, "rra");
		i++;
	}
	i = 0;
	while (i < abs(moves[1]))
	{
		if (moves[1] > 0)
			op_rotate(b, "rb");
		else if (moves[1] < 0)
			op_rrotate(b, "rrb");
		i++;
	}
	op_push_to(b, a, "pa");
}

int	*get_best_move(t_stack *stack)
{
	int			*best_move;
	t_content	*content;

	best_move = ((t_content *)stack->content)->moves;
	while (stack)
	{
		content = (t_content *)stack->content;
		if (abs(content->moves[0]) + abs(content->moves[1]) < abs(best_move[0])
			+ abs(best_move[1]))
			best_move = ((t_content *)stack->content)->moves;
		stack = stack->next;
	}
	return (best_move);
}

void	set_moves(t_stack **a, t_stack **b)
{
	t_stack		*i;
	t_content	*content;

	i = *b;
	while (i)
	{
		content = (t_content *)i->content;
		content->moves[0] = get_target_pos(*a, content->number);
		if (content->moves[0] > ft_stack_size(*a) / 2)
			content->moves[0] -= ft_stack_size(*a);
		content->moves[1] = content->index;
		if (content->moves[1] > ft_stack_size(*b) / 2)
			content->moves[1] -= ft_stack_size(*b);
		i = i->next;
	}
}
