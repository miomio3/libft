/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/18 16:53:14 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char	*p;
	char	*down;
	int		i;

	s = ft_strlen((char *)s1);
	tmp = ft_upfind(s1, set);
	down = ft_downfind(s1 + s - 1, set);
	i = 0;
	if (tmp >= down)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (s + 1));
	if (p == NULL)
		return (NULL);
	while (tmp != down + 1)
	{
		*(p + i) = *tmp;
		tmp++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
