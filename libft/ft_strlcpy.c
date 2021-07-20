/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:02:00 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/19 12:06:07 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (*(src + i))
		i++;
	j = 0;
	while (j < size - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	if (size != 0)
		dst[j] = '\0';
	return (i);
}
