/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 06:58:55 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 10:06:55 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data_structures.h"

void	ft_stack_push(t_stack **head, void *content)
{
	ft_lstadd_front((t_list **)head, (t_list *)ft_stack_new(content));
}
