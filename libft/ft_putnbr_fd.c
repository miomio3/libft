/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:23:56 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/13 13:57:12 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_fd(int keta, int n, int sign, int fd)
{
	int	tmp;
	int	i;

	while (keta--)
	{
		tmp = n;
		i = 0;
		while (i < keta)
		{
			tmp = tmp / 10;
			i++;
		}
		ft_putchar_fd('0' + tmp % 10 * sign, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	keta;
	int	sign;
	int	tmp;

	keta = 0;
	tmp = n;
	while (tmp)
	{
		tmp = tmp / 10;
		keta++;
	}
	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	else if (n == 0)
		ft_putchar_fd('0', fd);
	ft_put_fd(keta, n, sign, fd);
}
