/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:04:30 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/12 14:30:56 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data_structures.h"

void	*ft_stack_peek(t_stack *stack)
{
	if (ft_stack_isempty(stack))
		return (NULL);
	return (stack->content);
}
