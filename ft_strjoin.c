/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:29:38 by mmidorik          #+#    #+#             */
/*   Updated: 2021/03/11 18:28:37 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		len;
	int		i;

	if (size == 0)
	{
		array = (char*)malloc(sizeof(char) * 1);
		*array = '\0';
		return (array);
	}
	len = 0;
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	array = (char *)(malloc(len + 1 + ft_strlen(sep) * (size - 1)));
	*array = '\0';
	i = 0;
	while (i < size)
	{
		array = ft_strcat(array, strs[i]);
		if (i < size - 1)
			array = ft_strcat(array, sep);
		i++;
	}
	return (array);
}
