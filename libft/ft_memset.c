/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:50:11 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/20 14:51:36 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		*(p + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}
