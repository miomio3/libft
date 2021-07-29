/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:21:02 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/26 12:10:48 by mmidorik         ###   ########.fr       */
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
			return (p);
		p++;
	}
	return (NULL);
}
