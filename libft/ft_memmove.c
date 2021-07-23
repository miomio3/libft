/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:30:28 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/24 01:18:13 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*e;

	d = (unsigned char *)dst;
	e = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			*(d + i) = *(e + i);
			i++;
		}
	}
	else if (dst > src)
	{
		while (i < n)
		{
			*(d + n - i - 1) = *(e + n - i - 1);
			i++;
		}
	}
	return (dst);
}
