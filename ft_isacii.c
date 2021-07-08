/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:59:26 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 16:01:29 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main(0)
{
    printf("%d\n", isascii('a'));
    printf("%d\n", isascii('A'));
    printf("%d\n", isascii('1'));
    printf("%d\n", isascii('ｱ'));
	return (0);
}