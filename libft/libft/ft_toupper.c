/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:27:24 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 19:32:31 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int main(void)
{
    printf( "%c\n", ft_toupper('a') );
    printf( "%c\n", ft_toupper('A') );
    printf( "%c\n", ft_toupper('!') );

    return 0;
}