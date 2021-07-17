#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = (void *)malloc(size * (n + 1));
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', n + 1);
	return (p);
}
