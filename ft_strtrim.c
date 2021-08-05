/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/08/05 23:08:15 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	down_find(const char *s1, const char *set, size_t len)
{
	size_t	down;

	down = 0;
	while (len > 0)
	{
		len--;
		if (ft_strchr(set, s1[len]) == NULL)
		{
			down = len;
			break ;
		}
	}
	return (down);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*front;
	size_t	down;
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	front = (char *)&s1[len - 1];
	if (len == 0)
		return (ft_strdup(""));
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			front = (char *)&s1[i];
			break ;
		}
		i++;
	}
	down = down_find(front, set, ft_strlen(front));
	if (down == 0)
		return (ft_strdup(""));
	return (ft_substr(front, 0, down + 1));
}
