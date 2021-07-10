/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:15:48 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/10 15:22:38 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	n;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	n = '\n';
	write(fd, &n, 1);
}

int main(void)
{
	ft_putendl_fd("abcdef\n", 1);
	return (0);
}