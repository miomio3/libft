/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:23:56 by mmidorik          #+#    #+#             */
/*   Updated: 2021/08/03 00:57:55 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		ft_putchar_fd('-', fd);
	}
	if ((n / 10) * sign > 0)
	{
		ft_putnbr_fd((n / 10) * sign, fd);
		ft_putchar_fd('0' + (n % 10) * sign, fd);
	}
	else
		ft_putchar_fd('0' + n * sign, fd);
}
