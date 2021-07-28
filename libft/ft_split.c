/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/28 12:12:31 by mmidorik         ###   ########.fr       */
=======
/*   Updated: 2021/07/27 19:06:50 by mio              ###   ########.fr       */
>>>>>>> a70aca3f6eb0ca6691a7cc1e007106e45093c725
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_p(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
}

size_t	count_size(char const *s, char c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	if (s[0] != c && s[0] != '\0')
		size++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			size++;
		i++;
	}
	return (size);
}

char	**make_array(char const *s, char c, char **p)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		if (i++ == ft_strlen(s))
			break ;
		while (s[i] != c && s[i])
			i++;
		p[j] = ft_substr(s, start, i - start);
		if (p[j++] == NULL)
			return (free_p(p));
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (s == NULL)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (count_size(s, c) + 1));
	if (p == NULL)
		return (NULL);
	if (make_array(s, c, p) == NULL)
		return (NULL);
	return (p);
}
