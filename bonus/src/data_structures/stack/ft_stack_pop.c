/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:02:33 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 10:08:20 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data_structures.h"

void	ft_stack_pop(t_stack **head, void (*del)(void *))
{
	t_stack	*popped;

	if (ft_stack_isempty(*head))
		return ;
	popped = *head;
	*head = popped->next;
	ft_lstdelone((t_list *)popped, del);
}
