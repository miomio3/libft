/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/09 13:32:53 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_upfind(char const *c, char const *set)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (*(set + i))
	{
		if (*c == *(set + i))
		{
			p = ft_upfind(c + 1, set);
			if (p == 0)
				p = (char *)(c + 1);
			break;
		}
		i++;
	}
	return(p);
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
			break;
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
	int 	i;

	s = strlen(s1);
	p = (char *)malloc(sizeof(char) * (s + 1));
	if (p == NULL)
		return (NULL);
	tmp = ft_upfind(s1, set);
	down = ft_downfind(s1 + s - 1, set);
	i = 0;
	while (tmp != down + 1)
	{
		*(p + i) = *tmp;
		tmp++;
		i++;
	}
	return (p);
}

int main(void)
{
	char *s1 = "abcdefghij klmnopq";
	char *set = "afgh pq";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}