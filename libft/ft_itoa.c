/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:13:31 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/24 15:03:34 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_num(int n, int digits, char *p)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		*p = '-';
		*(p + digits - 1) = '0' - n % 10;
		n = n / 10;
		n = n * (-1);
		i++;
	}
	else if (n == 0)
		*p = '0';
	while (n)
	{
		*(p + digits - i - 1) = '0' + n % 10;
		n = n / 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		tmp;
	char	*p;
	int		digits;

	digits = 0;
	tmp = n;
	if (tmp <= 0)
		digits++;
	while (tmp)
	{
		tmp = tmp / 10;
		digits++;
	}
	p = ft_calloc(digits + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_put_num(n, digits, p);
	return (p);
}
