/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/13 18:34:56 by mio              ###   ########.fr       */
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

	if (s == 0)
		return (NULL);
	array = (int *)ft_calloc(strlen(s), sizeof(char));
	if (array == NULL)
		return (NULL);
	size = ft_size_array(s, c, array, strlen(s));
	p = (char **)ft_calloc(size, sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*(array + i))
	{
		*(p + i) = (char *)ft_calloc(*(array + i) + 1, sizeof(char));
		i++;
	}
	ft_put_array(s, c, array, p);
	free(array);
	return (p);
}

