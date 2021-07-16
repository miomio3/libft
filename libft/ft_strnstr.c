/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:04:58 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/15 23:38:45 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	*p;

	n = 0;
	i = 0;
	p = (char *)hay;
	while (*(needle + n))
		n++;
	if (n == 0)
		return (p);
	while (i < len)
	{
		j = 0;
		while (*(p + i + j) == *(needle + j) && i < len)
		{
			 j++;
			if (j == n)
				return (p + i);
		}
		i++;
	}
	return (NULL);
}
