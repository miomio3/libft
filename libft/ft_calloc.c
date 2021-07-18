/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:51:07 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/18 17:51:37 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = (void *)malloc(size * n);
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', size * n);
	return (p);
}
