/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:33:01 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 15:45:18 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

int main(void)
{
    char *ascii = "AB?#12ab";
    int i;

    for (i=0; i < (int)strlen(ascii); i++) {
        if (ft_isalpha(ascii[i])) {
            printf("ascii[%d] = %c is alphabet.\n", i, ascii[i]);
        } else {
            printf("ascii[%d] = %c is *not* alphabet.\n", i, ascii[i]);
        }
    }

    return 0;
}