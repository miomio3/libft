/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/22 22:25:37 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_create_array(char *f, int *array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (f[i])
	{
		if (f[i] == '1' && f[i + 1] == '0')
			j++;
		else if (f[i] == '0')
			array[j - 1]++;
		i++;
	}
	j++;
	array[j - 1] = 1;
	return (j);
}

int	ft_size_array(char const *s, char c, int *array, int len)
{
	char	*f;
	int		i;
	int		j;

	f = (char *)ft_calloc(len, sizeof(char));
	*f = '1';
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			f[i + 1] = '1';
		else
			f[i + 1] = '0';
		i++;
	}
	j = ft_create_array(f, array);
	free(f);
	return (j);
}

void	ft_put_array(char const *s, char c, int *array, char **p)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			p[k][j] = *(s + i);
			j++;
		}
		if (j == array[k])
		{
			p[k][j] = '\0';
			k++;
			j = 0;
		}
		i++;
	}
	p[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		size;
	int		i;
	int		*array;

	if (s == NULL)
		return (NULL);
	array = (int *)malloc(sizeof(int) * ft_strlen((char *)s));
	size = ft_size_array(s, c, array, ft_strlen((char *)s));
	p = (char **)malloc(size * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*(array + i))
	{
		*(p + i) = (char *)malloc(sizeof(char) * (*(array + i) + 1));
		i++;
	}
	ft_put_array(s, c, array, p);
	return (p);
}
