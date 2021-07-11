/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:58:19 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 16:59:20 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	while (i < n)
	{
		p = (unsigned char *)buf;
		*(p + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}

int main (void)
{
    char str[] = "0123456789";
    ft_memset(str+2, '*', 5);
    printf("%s\n", str);
    return (0);
}