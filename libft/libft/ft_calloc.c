/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:35:37 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/08 19:48:50 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	while (i < n)
	{
		p = (unsigned char *)buf;
		*(p + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = (void *)malloc(size * n);
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', n);
	return (p);
}

int main(void)
{
   int *ptr,*p;
   int i;

   /* 500個のintサイズのメモリを確保 */
   ptr = (int *)ft_calloc(500,sizeof(int));
   if(ptr == NULL) {
      printf("メモリが確保できません\n");
      exit(EXIT_FAILURE);
   }

   p = ptr;
   for (i=0; i<500; i++) {
      *p = i;
      printf("%d ",*p);
      p++;
   }

   /* メモリの開放 */
   free(ptr);

   return 0;
}