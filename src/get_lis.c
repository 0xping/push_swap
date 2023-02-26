/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:23:46 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/26 01:17:45 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

typedef struct s_inc_subs
{
	int				length;
	int				subs;
}					t_inc_subs;

static int	get_len_index(t_inc_subs *lis_helper, int size, int el)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (lis_helper[i].length == el)
			return (i);
		i++;
	}
	return (-1);
}

static t_inc_subs	*init_lis_helper(int size)
{
	t_inc_subs	*lis_helper;
	int			i;

	lis_helper = malloc(sizeof(t_inc_subs) * size);
	if (lis_helper)
	{
		i = 0;
		while (i < size)
		{
			lis_helper[i].length = 1;
			lis_helper[i].subs = 0;
			i++;
		}
	}
	return (lis_helper);
}

static void	fill_lis_helper(int arr[], int size, t_inc_subs **lis_helper)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (arr[j] < arr[i] && (*lis_helper)[j].length
				+ 1 >= (*lis_helper)[i].length)
			{
				(*lis_helper)[i].length = (*lis_helper)[j].length + 1;
				(*lis_helper)[i].subs = j;
			}
			j++;
		}
		i++;
	}
}

typedef struct s_args
{
	t_inc_subs		*lis_helper;
	int				lis_length;
}					t_args;

void	fill_result(t_arr *result, int arr[], int size, t_args args)
{
	int	i;
	int	len_index;

	i = 0;
	len_index = get_len_index(args.lis_helper, size, args.lis_length);
	result->arr = malloc(sizeof(int) * (args.lis_length + 1));
	result->size = args.lis_length;
	while (len_index > 0)
	{
		result->arr[i++] = arr[len_index];
		len_index = args.lis_helper[len_index].subs;
	}
	result->arr[i] = arr[len_index];
	len_index = args.lis_helper[len_index].subs;
}

// get the longest increasing subsequence in an array
t_arr	*get_lis(int arr[], int size)
{
	t_inc_subs	*lis_helper;
	int			len_index;
	int			lis_length;
	int			i;
	t_arr		*result;

	lis_helper = init_lis_helper(size);
	fill_lis_helper(arr, size, &lis_helper);
	i = 0;
	lis_length = lis_helper[0].length;
	while (i < size)
	{
		if (lis_helper[i].length > lis_length)
			lis_length = lis_helper[i].length;
		i++;
	}
	len_index = get_len_index(lis_helper, size, lis_length);
	result = malloc(sizeof(t_arr));
	if (result)
		fill_result(result, arr, size, (t_args){lis_helper, lis_length});
	free(lis_helper);
	return (result);
}
