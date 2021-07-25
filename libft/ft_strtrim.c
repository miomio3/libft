/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/26 00:35:39 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr2(char const *front, char const *back)
{
	size_t	i;

	i = 0;
	while (front[i])
	{
		if (&front[i] == back)
			break ;
		else
			i++;
	}
	return (ft_substr(front, 0, i + 1));
}

char	*ft_upfind(const char *s, char *c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (c[j])
		{
			if (s[i] == c[j])
				break ;
			j++;
		}
		i++;
	}
}

char	*ft_downfind(const char *s, char *c)
{
	size_t	i;
	size_t	j;

	i == ft_strlen(s);
	while (i > 0)
	{
		j = 0;
		while (c[j])
		{
			if (s[i] == c[j])
				break ;
			j++;
		}
		i--;
	}
	return (s[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*down;

	if (s1 == NULL || set == NULL)
		return (NULL);
	tmp = ft_upfind(s1, set);
	down = ft_downfind(s1 + ft_strlen(s1) - 1, set);
	if (tmp >= down)
		return (ft_strdup(""));
	return (ft_substr2(tmp, down));
}
