/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:34:29 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/07 19:38:03 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

int main(void)
{
    printf( "%c\n", ft_tolower('a') );
    printf( "%c\n", ft_tolower('A') );
    printf( "%c\n", ft_tolower('!') );

    return 0;
}