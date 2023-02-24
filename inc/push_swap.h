/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:20:57 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/24 17:50:08 by aait-lfd         ###   ########.fr       */
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
}		t_content;

typedef struct s_arr
{
	int	*arr;
	int	size;
}		t_arr;

t_stack	*parse_arguments(int ac, char const *av[]);
void	set_index(void *content);
void	push_non_lis(t_stack **from, t_stack **to);
int		*stack_to_arr(t_stack *stack);
t_arr	*get_lis(int arr[], int size);

#endif