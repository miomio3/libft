/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/22 20:59:11 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr2(char const *front, char const *back)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)front;
	while (tmp[i])
	{
		if (&tmp[i] == back)
			break ;
		else
			i++;
	}
	return (ft_substr(front, 0, i + 1));
}

char	*ft_upfind(char const *c, char const *set)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (*(set + i))
	{
		if (*c == *(set + i))
		{
			p = ft_upfind(c + 1, set);
			if (p == NULL)
				p = (char *)(c + 1);
			break ;
		}
		i++;
	}
	if (p == NULL)
		return ((char *)c);
	else
		return (p);
}

char	*ft_downfind(char const *c, char const *set)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (*(set + i))
	{
		if (*c == *(set + i))
		{
			p = ft_downfind(c - 1, set);
			break ;
		}
		i++;
	}
	if (p == 0)
		return ((char *)c);
	return ((char *)p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	char	*tmp;
	char	*down;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s = ft_strlen((char *)s1);
	tmp = ft_upfind(s1, set);
	down = ft_downfind(s1 + s - 1, set);
	if (tmp >= down)
		return (ft_strdup(""));
	return (ft_substr2(tmp, down));
}
