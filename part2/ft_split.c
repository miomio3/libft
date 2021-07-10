/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:49:28 by mio               #+#    #+#             */
/*   Updated: 2021/07/10 11:31:08 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	f = (char *)malloc(sizeof(char) * len);
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
			k++;
		i++;
	}
	p[k][0] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		size;
	int		i;
	int		*array;

	if (s == 0)
		return (NULL);
	array = (int *)calloc(strlen(s), sizeof(char));
	if (array == NULL)
		return (NULL);
	size = ft_size_array(s, c, array, strlen(s));
	p = (char **)calloc(size, sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*(array + i))
	{
		*(p + i) = (char *)calloc(*(array + i) + 1, sizeof(char));
		i++;
	}
	ft_put_array(s, c, array, p);
	free(array);
	return (p);
}

int     main(void)
{
    char **result;

	result=ft_split("aaaaa", 'a');
	printf("base1 => %s\n", result[0]);//nullポインタ
    free(result);
	result=ft_split("", 'a');//nullポインタ
	printf("base2 => %s\n", result[0]);
    free(result);
	result=ft_split("aaaa", '\0');
	printf("base3 => %s\n", result[0]);//aaaa,nullポインタ
    free(result);
	result=ft_split("", '\0');
	printf("base4 => %s\n", result[0]);//nullポインタ
    free(result);
    return (0);
}
