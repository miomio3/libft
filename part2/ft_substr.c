/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:53:10 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 18:10:48 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	while (*(s + start + i))
		i++;
	if (i < start)
		return ("");
	p = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (i < len)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	return (p);
}

int	main(void)
{
	printf("%s\n", ft_substr("aiueo", 2, 2));
	printf("%s\n", ft_substr("aiueo", 2, 7));
	printf("%s\n", ft_substr("aiueo", 7, 2));
	return (0);
}
