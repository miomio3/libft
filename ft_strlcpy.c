/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:02:00 by mmidorik          #+#    #+#             */
/*   Updated: 2021/08/03 01:15:11 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			j;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (0);
	j = 0;
	while (j + 1 < size && s[j])
		d[j] = s[j++];
	if (size != 0)
		d[j] = '\0';
	return (ft_strlen(s));
}
