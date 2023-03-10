/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:49:49 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 09:56:28 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	subs = ft_calloc(len + 1, 1);
	if (subs)
	{
		i = 0;
		while (i < len && s[start + i])
		{
			subs[i] = s[start + i];
			i++;
		}
		subs[len] = 0;
	}
	return (subs);
}
