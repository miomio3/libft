/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:00:49 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 16:58:28 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        <stdio.h>
#include        <string.h>

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *)buf1;
	i = 0;
	while (i < n)
	{
		*(d + n - i - 1) = *(char *)(buf2 + n - i - 1);
		i++;
	}
	return (buf1);
}

int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstu";

	printf("移動前：%s\n", str);
	memmove(str+5, str, 10);
	printf("移動後：%s\n", str);
	return (0);
}
