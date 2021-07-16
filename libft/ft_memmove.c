/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:30:28 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/14 03:19:42 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*e;

	d = (unsigned char *)buf1;
	e = (unsigned char *)buf2;
	i = 0;
	if (buf1 < buf2)
	{
		while (i < n)
		{
			*(d + i) = *(e + i);
			i++;
		}
	}
	else if (buf1 > buf2)
	{
		while (i < n)
		{
			*(d + n - i - 1) = *(e + n - i - 1);
			i++;
		}
	}
	return (buf1);
}
