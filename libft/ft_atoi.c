/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:13:31 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 14:02:11 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nb;

	i = 0;
	nb = 0;
	negative = 0;
	while (ft_isspace(*(str + i)))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			negative++;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (negative % 2 == 1)
		nb = nb * (-1);
	return (nb);
}
