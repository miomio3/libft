/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:09:50 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 16:14:16 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main(void)
{
    for( int i = 0; i < UCHAR_MAX; ++i ){
        if( ft_isprint(i) ){
            printf( "%c (%x)\n", i, i );
        }
    }

    return 0;
}