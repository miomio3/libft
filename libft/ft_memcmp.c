/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:57:21 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/14 03:24:54 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	while (i < n)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	printf("CL(%d): %d\n", 5, memcmp("aiueo", "aiue1", 5));
	printf("FT(%d): %d\n", 5, ft_memcmp("aiueo", "aiue1", 5));

	int i = 5;
	printf("CL(%d): %d\n", i, memcmp("aiueo", "aiue1", i));
	printf("FT(%d): %d\n", i, ft_memcmp("aiueo", "aiue1", i));
	return (0);
	
}
