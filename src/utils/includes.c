/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:36:36 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/26 01:39:52 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

//  determines whether an array includes a certain value
int	includes(int arr[], int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (value == arr[i])
			return (1);
		i++;
	}
	return (0);
}
