/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:58:10 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/11 12:58:27 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*d;

	d = (char *)buf1;
	if (buf1 == 0 && buf2 == 0)
		return (NULL);
	while (n--)
	{
		*d++ = *(const char *)buf2;
		buf2++;
	}
	return (buf1);
}
