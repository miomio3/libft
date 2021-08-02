/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:06:45 by mmidorik          #+#    #+#             */
/*   Updated: 2021/08/03 01:07:19 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*t;
	size_t			i;

	i = 0;
	t = NULL;
	while (*s)
	{
		if ((unsigned char *)s == (unsigned char)c)
			t = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (t);
}
