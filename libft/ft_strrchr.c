/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:06:45 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/16 18:44:35 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = "";
	while (*s)
	{
		if (*s == (char)c)
		{
			t = (char *)s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (*t != (char)c)
		return (NULL);
	return ((char *)t);
}
