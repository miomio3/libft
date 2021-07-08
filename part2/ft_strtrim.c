/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:48:36 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 21:51:54 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		i;
	char	*p;

	p = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (p = NULL)
		return (NULL);
	s = strlen(set);
	
	return (p);
}

int main(void)
{
	char *s1 = "abcdefghij klmnopq";
	char *set = "afgh pq";
	printf("%s", strtrim(s1, set));
	return (0);
}