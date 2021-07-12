/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:56:24 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/12 12:06:30 by mmidorik         ###   ########.fr       */
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
