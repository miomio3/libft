/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:06:45 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/22 20:57:38 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	size_t	i;
	char	*tmp;

	i = 0;
	t = NULL;
	tmp = (char *)s;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			t = &tmp[i];
		i++;
	}
	if (c == '\0')
		return (&tmp[i]);
	if (t == NULL)
		return (NULL);
	return (t);
}
