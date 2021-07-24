/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/24 14:58:12 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_p(char **p)
{
	size_t	i;

	i = 0;
	while (p[++i])
		free(p[i]);
	free(p[i]);
	free(p);
}

char	*ft_strnochr(const char *s, char c, int f)
{
	if (f == 0)
	{
		while (*s)
		{
			if (*s == c)
				s++;
			else
				break ;
		}
		if (*s == c || *s == '\0')
			return (NULL);
		return ((char *)s);
	}
	else
	{
		while (*s)
		{
			if (*s != c)
				s++;
			else
				break ;
		}
		return ((char *)s - 1);
	}
}

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

char	**ft_split2(char	const *s, char c, int i)
{
	char	*front;
	char	*back;
	char	**p;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0' || ft_strnochr(s, c, 0) == NULL)
	{
		p = (char **)malloc(sizeof(char *) * (i + 1));
		if (p == NULL)
			return (NULL);
		p[i] = NULL;
		return (p);
	}
	else
	{
		front = ft_strnochr(s, c, 0);
		back = ft_strnochr(front + 1, c, 1);
		p = ft_split2(back + 1, c, i + 1);
		p [i] =ft_substr2(front, back);
		if (p[i] == NULL)
			free_p(p + i);
		return (p);
	}
}

char	**ft_split(char const *s, char c)
{
	if (s == NULL)
		return (NULL);
	return (ft_split2(s, c, 0));
}
