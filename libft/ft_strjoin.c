/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:29:38 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/17 18:10:35 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;

	i = 0;
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
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
