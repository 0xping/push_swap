/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:17:01 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/28 22:36:57 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../../inc/push_swap.h"

void	op_push_to(t_stack **from, t_stack **to);
void	op_rotate(t_stack **head);
void	op_rr(t_stack **stack_a, t_stack **stack_b);
void	op_rrotate(t_stack **head);
void	op_rrr(t_stack **stack_a, t_stack **stack_b);
void	op_swap(t_stack **head);
void	op_ss(t_stack **stack_a, t_stack **stack_b);

#endif