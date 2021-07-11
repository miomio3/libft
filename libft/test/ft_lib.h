#ifndef FT_LIB_H_
#define FT_LIB_H_

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


#endif