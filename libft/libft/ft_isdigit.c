/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:48:10 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 15:51:48 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main(void)
{
    if(ft_isdigit('a')){
        puts("aは数字です");
    }
    if(ft_isdigit('5')){
        puts("5は数字です。");
    }
    return 0;
}