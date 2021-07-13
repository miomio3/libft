/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:56:24 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/13 15:52:32 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)buf;
	while (n)
	{
		n--;
		if (*p == (unsigned char)ch)
			break ;
		p++;
	}
	if (*p != (unsigned char)ch || n == 0)
		return (NULL);
	return ((unsigned char *)p);
}
