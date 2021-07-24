/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:06:45 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/24 01:20:28 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*t;
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	t = NULL;
	tmp = (unsigned char *)s;
	while (tmp[i])
	{
		if (tmp[i] == (unsigned char)c)
			t = &tmp[i];
		i++;
	}
	if (c == '\0')
		return ((char *)(tmp + i));
	if (t == NULL)
		return (NULL);
	return ((char *)t);
}
