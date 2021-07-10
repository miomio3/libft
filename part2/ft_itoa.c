/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:13:31 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/10 11:25:13 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int main(void)
{
	printf("%s\n", ft_itoa(21474));
	printf("%s\n", ft_itoa(-4));
	printf("%s\n", ft_itoa(-2147483648));
	return(0);
}