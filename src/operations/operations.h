/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:17:01 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/19 00:37:03 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../data_structures/data_structures.h"
# include "../utils/utils.h"

void	op_push_to(t_stack **from, t_stack **to, char *op);
void	op_rotate(t_stack **head, char *op);
void	op_rr(t_stack **stack_a, t_stack **stack_b);
void	op_rrotate(t_stack **head, char *op);
void	op_rrr(t_stack **stack_a, t_stack **stack_b);
void	op_swap(t_stack **head, char *op);
void	op_ss(t_stack **stack_a, t_stack **stack_b);

#endif