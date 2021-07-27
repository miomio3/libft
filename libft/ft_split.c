/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/27 17:19:38 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = strlen((char *)s);
	if (*s == '\0' || start >= s_len)
		return (strdup(""));
	while (*(s + start + i))
		i++;
	if (len < s_len)
		s_len = len;
	p = (char *)malloc(sizeof(char) * (s_len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i))
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

char	**free_p(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p[i]);
	free(p);
	return (NULL);
}

size_t	count_size(char const *s, char c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	start;
	size_t	j;

	p = (char **)malloc(sizeof(char *) * (count_size(s, c) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		i++;
		while (s[i] != c && s[i])
			i++;
		p[j] = ft_substr(s, start, i - start);
		if (p[j] == NULL)
			return (free_p(p));
		j++;
	}
	p[j] = NULL;
	return (p);
}

int main(void)
{
	size_t	i;
	char **p = ft_split("abcdefcghij   ", 'c');
	i = 0;
	while (p[i])
		printf("%s\n", p[i++]);
	printf("%s", p[i]);
		return (0);
}