/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/21 09:38:30 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnochr(const char *s, char c, int f)
{
	if (f == 0)
	{
		while (*s)
		{
			if (*s == (char)c)
				s++;
			else
				break ;
		}
		if (*s == (char)c || *s == '\0')
			return (NULL);
		return ((char *)s);
	}
	else
	{
		while (*s)
		{
			if (*s != (char)c)
				s++;
			else
				break ;
		}
		return ((char *)s - 1);
	}
}

char	*ft_substr2(char const *front, char const *back)
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
		return (p);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	return (ft_split2(s, c, 0));
}
