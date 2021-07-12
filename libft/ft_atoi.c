/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:47:48 by mmidorik          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/12 11:49:17 by mmidorik         ###   ########.fr       */
=======
/*   Updated: 2021/07/11 12:48:05 by mmidorik         ###   ########.fr       */
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}
=======
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
<<<<<<< HEAD
	while (ft_isspace(str[i]))
=======
	while (str[i] == 32)
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
<<<<<<< HEAD
	else if (str[i] == '+')
		i++;
=======
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
<<<<<<< HEAD
	return (nb * sign);
=======
	return (nb);
>>>>>>> fcc05589979f28222ad4c35d99fe2557d6ab094b
}
