/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:39:16 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 20:23:35 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			break ;
		s++;
	}
	if (*s != (char)c)
		return (NULL);
	return ((char *)s);
}

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = getchar();
	
	p = ft_strchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}
