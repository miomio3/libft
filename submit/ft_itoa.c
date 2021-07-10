/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:13:31 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/10 18:01:50 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_put_num(int n, int keta, char *p)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		*p = '-';
		keta++;
		*(p + keta - 1) = '0' - n % 10;
		n = n / 10;
		n = n * (-1);
		i++;
	}
	while (n)
	{
		*(p + keta - i - 1) = '0' + n % 10;
		n = n / 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		tmp;
	char	*p;
	int		keta;

	keta = 0;
	tmp = n;
	while (tmp)
	{
		tmp = tmp / 10;
		keta++;
	}
	p = calloc(keta + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_put_num(n, keta, p);
	return (p);
}
