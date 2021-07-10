/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:53:10 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/10 18:02:40 by mmidorik         ###   ########.fr       */
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
