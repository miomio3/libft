/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:30:28 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/24 12:21:08 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d_unsigned;
	unsigned char	*s_unsigned;

	if (dst == NULL && src == NULL)
		return (NULL);
	d_unsigned = (unsigned char *)dst;
	s_unsigned = (unsigned char *)src;
	if (dst < src)
		while (n--)
			*(d_unsigned++) = *(s_unsigned++);
	else if (dst >= src)
		while (n--)
			*(d_unsigned + n) = *(s_unsigned + n);
	return (dst);
}
