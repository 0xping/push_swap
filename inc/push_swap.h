/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:20:57 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/03/10 14:51:21 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/data_structures/data_structures.h"
# include "../src/operations/operations.h"
# include "../src/utils/utils.h"

typedef struct s_content
{
	int	number;
	int	index;
	int	*moves;
}		t_content;

typedef struct s_arr
{
	int	*arr;
	int	size;
}		t_arr;

t_stack	*parse_arguments(int ac, char const *av[]);
void	set_index(void *content);
int		*stack_to_arr(t_stack *stack);
t_arr	*get_lis(int arr[], int size);
t_stack	*get_node(t_stack *stack, int n);
t_stack	*get_min(t_stack *stack);
t_stack	*get_max(t_stack *stack);
void	push_node_to_top(t_stack **head, t_stack *node, char stack_name);
void	filter_stack(t_stack **a, t_stack **b, t_arr *inc);
void	exec_move(t_stack **a, t_stack **b, int *moves);
void	set_moves(t_stack **a, t_stack **b);
int		*get_best_move(t_stack *stack);
int		is_sorted(t_stack *stack);

#endif
