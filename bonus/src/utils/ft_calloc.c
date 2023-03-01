/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:58 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 09:56:28 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count > SIZE_MAX / size)
		return (0);
	p = malloc(count * size);
	if (p)
		ft_bzero(p, count * size);
	return (p);
}
