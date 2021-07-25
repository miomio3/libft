/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/26 00:58:18 by mio              ###   ########.fr       */
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
	while (*(s + start + i))
		i++;
	s_len = strlen((char *)s);
	if (*s == '\0' || start >= s_len)
		return (strdup(""));
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

char	*ft_upfind(const char *s, const char *c)
{
	size_t	i;
	size_t	j;
	char	*sc;

	i =0;
	j = 0;
	sc = &s[i];
	while (s[i])
	{
		if ((unsigned char)s[i] != (unsigned char)c[j])
			break ;
		i++;
		sc = &s[i];
	}
	return (sc);
}

char	*ft_downfind(const char *s, const char *c)
{
	size_t	i;
	size_t	j;

	i = strlen(s) - 1;//
	while (i)
	{
		j = 0;
		while (c[j])
		{
			if ((unsigned char)s[i] != (unsigned char)c[j])
				break ;
			j++;
		}
		i--;
	}
	return ((char *)&s[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*down;

	if (s1 == NULL || set == NULL)
		return (NULL);
	tmp = ft_upfind(s1, set);
	down = ft_downfind(s1 + strlen(s1) - 1, set);
	if (tmp >= down)
		return (strdup(""));//
	return (ft_substr2(tmp, down));
}

int main(void)
{
	ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ",  " \n\t");
	return (0);
}