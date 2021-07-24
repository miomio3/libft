/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:13:31 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/21 20:08:59 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_num(int n, int keta, char *p)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		*p = '-';
		*(p + keta - 1) = '0' - n % 10;
		n = n / 10;
		n = n * (-1);
		i++;
	}
	else if (n == 0)
		*p = '0';
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
	if (tmp <= 0)
		keta++;
	while (tmp)
	{
		tmp = tmp / 10;
		keta++;
	}
	p = ft_calloc(keta + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_put_num(n, keta, p);
	return (p);
}
