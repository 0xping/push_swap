/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:13:27 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/28 22:48:13 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ln_index(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == '\n')
				return (i);
			i++;
		}
	}
	return (-1);
}

static void	*ft_free(char **s1, char **s2)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = 0;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = 0;
	}
	return (0);
}

static char	*get_ln(char **buff, char **stc, int fd, ssize_t rd)
{
	char	*result;
	char	*tmp;

	result = 0;
	while (rd >= 0)
	{
		(*buff)[rd] = 0;
		tmp = *(stc);
		*stc = ft_strjoin(*stc, *buff);
		ft_free(&tmp, 0);
		if (ln_index(*stc) >= 0)
		{
			tmp = *stc;
			split_with_nl(&result, stc, *stc);
			return (ft_free(&tmp, buff), result);
		}
		if (rd == 0)
		{
			(**stc) && (result = ft_strdup(*stc));
			return (ft_free(buff, stc), result);
		}
		rd = read(fd, *buff, BUFFER_SIZE);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*stc;
	char		*buff;
	int			rd;

	buff = malloc(BUFFER_SIZE + 1);
	if (buff)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd < 0)
		{
			ft_free(&stc, &buff);
			return (0);
		}
		return (get_ln(&buff, &stc, fd, rd));
	}
	return (buff);
}
