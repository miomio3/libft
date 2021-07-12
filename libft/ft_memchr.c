/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:56:24 by mmidorik          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/12 12:06:30 by mmidorik         ###   ########.fr       */
=======
/*   Updated: 2021/07/11 12:56:38 by mmidorik         ###   ########.fr       */
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b
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
