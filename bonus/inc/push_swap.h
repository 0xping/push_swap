/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:20:57 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/28 22:12:25 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../get_next_line/get_next_line.h"
# include "../src/data_structures/data_structures.h"
# include "../src/operations/operations.h"
# include "../src/utils/utils.h"

typedef struct s_content
{
	int	number;
	int	index;
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
t_stack	*get_min(t_stack *stack);
void	push_node_to_top(t_stack **head, t_stack *node, char stack_name);
t_stack	*get_node(t_stack *stack, int n);
void	filter_stack(t_stack **a, t_stack **b, t_arr *inc);

#endif