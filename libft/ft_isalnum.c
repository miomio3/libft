/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:53:35 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 15:57:09 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

int main(void)
{
    if(ft_isalnum('a')){
        puts("aは英数字です");
    }
 
    if(ft_isalnum('=')){
        puts("=は英数字です。");
    }

    return 0;
}
