/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:29:38 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/11 12:00:56 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;

	i = 0;
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*s1)
	{
		*(p + i) = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		*(p + i) = *s2;
		i++;
		s2++;
	}
	*(p + i) = '\0';
	return (p);
}

int main(void)
{
	char *s1 = "12345";
	char *s2 = "abcde";
	char *s3 = "";
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s1, s3));
	return (0);
}
