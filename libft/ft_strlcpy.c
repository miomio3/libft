/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:02:00 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/12 19:26:27 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (*(src + i))
		i++;
	j = 0;
	while (j < size - 1 && *(src + j))
	{
		d[j] = s[j];
		j++;
	}
	*(dst + j) = '\0';
	return (i - 1);
}

int main(void)
{
	char *s = "rrrrrr000000000";
	char *src = "lorem";
	printf("%zu", ft_strlcpy(s, src, 15));
	printf("%s", s);
	return (0);
}