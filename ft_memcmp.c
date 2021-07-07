/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:38:43 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 21:45:58 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        <stdio.h>
#include        <string.h>

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

int main(void)
{
        char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
        char buf2[] = "\0abc\0de";
        char buf3[] = "\0abcdef";
        
        if (memcmp(buf1, buf2, 7) == 0)
                printf("buf1 = buf2\n");
        else
                printf("buf1 != buf2\n");

        if (memcmp(buf1, buf3, 7) == 0)
                printf("buf1 = buf3\n");
        else
                printf("buf1 != buf3\n");

        return 0;
}
