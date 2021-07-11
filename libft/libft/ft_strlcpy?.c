/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:20:16 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 17:52:32 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(src + i))
		i++;
	j = 0;
	while (j < size - 1 && *(src + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	*(dest + j) = '\0';
	return (i - 1);
}

int main(void)
{
	char dest[] = "01234";
	char src[] = "12";
	ft_strlcpy(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}