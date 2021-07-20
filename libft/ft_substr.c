/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:53:10 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/18 22:18:57 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (*(s + start + i))
		i++;
	if (*s == '\0' || start >= (unsigned int)ft_strlen((char *)s))
	{
		return (ft_strdup(""));
	}
	p = (char *)malloc(sizeof(char) * (len + 1));
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
