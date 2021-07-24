/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:07:11 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/24 15:07:04 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	size_t			len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	p = (char *)malloc((len + 1)* sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] =(*f)(i, s[i]);
		i++;
	}
	return (p);
}
