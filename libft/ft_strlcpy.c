/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:02:00 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/11 13:02:13 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
