/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:20:45 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 15:59:02 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*d;

	d = (char *)buf1;
	if (buf1 == 0 && buf2 == 0)
		return (NULL);
	while (n--)
	{
		*d++ = *(const char *)buf2;
		buf2++;
	}
	return (buf1);
}

int main(void)
{
        char str1[128] = {1,1,1,1,1,1,1};
        char str2[] = "ab\0cde";        /* 途中に空文字のある文字列 */
        int i;

        for (i=0; i<7; i++)
                printf("%x ",str1[i]);
        printf("\n");
        
        ft_memcpy(str1, str2, 5);

        for (i=0; i<7; i++)
                printf("%x ",str1[i]);
        printf("\n");

        return 0;
}