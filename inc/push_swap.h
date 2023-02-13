/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:20:57 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 12:30:32 by aait-lfd         ###   ########.fr       */
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

t_stack	*parse_arguments(int ac, char const *av[]);

#endif