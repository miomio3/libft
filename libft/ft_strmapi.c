/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mio <mio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:07:11 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/16 14:09:10 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static char		mapi(unsigned int i, char c)
{
		static int indexArray[11] = {0};

			if (i > 10 || indexArray[i] == 1)
						write(1, "wrong index\n", 12);
				else
							indexArray[i] = 1;
					if (c >= 'a' && c <= 'z')
								return (c - 32);
						else if (c >= 'A' && c <= 'Z')
									return (c + 32);
							else
										return (c);
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	int				len;
	unsigned int	i;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	len = strlen((char *)s);//shusei
	p = (char *)calloc(len, sizeof(char));//shusei
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	return (p);
}
