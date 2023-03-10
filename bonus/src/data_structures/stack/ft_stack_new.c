/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 06:57:59 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 10:08:45 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data_structures.h"

t_stack	*ft_stack_new(void *content)
{
	return ((t_stack *)ft_lstnew(content));
}
