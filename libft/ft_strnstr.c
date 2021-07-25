/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:04:58 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/25 23:56:49 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;

	n = 0;
	i = 0;
	while (*(needle + n))
		n++;
	if (n == 0)
		return ((char *)hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (*(hay + i + j) == *(needle + j) && i + j < len)
		{
			 j++;
			if (j == n)
				return ((char *)hay + i);
		}
		i++;
	}
	return (NULL);
}
