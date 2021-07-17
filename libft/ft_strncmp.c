/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:04:06 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/16 13:31:51 by mio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if ((*(s1 + i) - *(s2 + i)) > 0)
			return (1);
		else if ((*(s1 + i) - *(s2 + i)) < 0)
			return (-1);
		i++;
	}
	return (0);
}
