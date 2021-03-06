/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:47:48 by mmidorik          #+#    #+#             */
/*   Updated: 2021/08/04 21:46:53 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || \
	c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

static int	ft_overflow(unsigned long nb, char str, int sign)
{
	if (sign == 1)
	{
		if ((nb == (unsigned long)LONG_MAX / 10 && \
		str - '0' >= (int)LONG_MAX % 10 ) || \
		nb > (unsigned long)LONG_MAX / 10)
			return (1);
	}
	else
	{
		if ((nb == (unsigned long)LONG_MIN / 10 && \
		str - '0' >= (int)LONG_MIN % 10) || \
		nb > (unsigned long)LONG_MIN / 10)
			return (-1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned long	nb;
	int				overflow;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		overflow = ft_overflow(nb, str[i], sign);
		if (overflow == -1)
			return ((int)LONG_MIN);
		if (overflow == 1)
			return ((int)LONG_MAX);
		nb = nb * 10 + (str[i++] - '0');
	}
	return ((int)nb * sign);
}
