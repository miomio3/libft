/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:24:53 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 21:33:34 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        <stdio.h>
#include        <string.h>

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)buf;
	while (n--)
	{
		if (*p == (unsigned char)ch)
			break ;
		p++;
	}
	if (*p != (unsigned char)ch)
		return (NULL);
	return ((unsigned char *)p);
}

int main(void)
{
        char str[] = "abcdef\0ghij";    /* 途中に空文字のある文字列 */
        char *p;
        
        p = ft_memchr(str, 'h', 12);
        printf("検索文字は文字列の%ld番目\n",p - str);
        
        return 0;
}