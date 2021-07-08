/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:25:47 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 20:54:42 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			t = (char *)s;
		}
		s++;
	}
	if (t == 0)
		return (NULL);
	return ((char *)t);
}

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;
	c = 'a';
	
	p = ft_strrchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}