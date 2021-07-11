/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <uj132139@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:44:43 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/10 22:17:20 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	while (str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		*(p + i) = 0;
		i++;
	}
}

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

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)buf;
	while (n--)
	{
		if (*p == (unsigned char)ch)
			break ;
		p++;
	}
	if (*p != (unsigned char)ch)
		return (NULL);
	return ((unsigned char *)p);
}

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	while (i < n)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*d;

	d = (char *)buf1;
	if (buf1 == 0 && buf2 == 0)
		return (NULL);
	while (n--)
	{
		*d++ = *(const char *)buf2;
		buf2++;
	}
	return (buf1);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			break ;
		s++;
	}
	if (*s != (char)c)
		return (NULL);
	return ((char *)s);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	i = 0;
	if (dest == '\0')
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (size > 0 && i < size && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(src + i))
		i++;
	j = 0;
	while (j < size - 1 && *(src + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	*(dest + j) = '\0';
	return (i - 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	*p;

	n = 0;
	i = 0;
	p = (char *)haystack;
	while (*(needle + n))
		n++;
	if (n == 0)
		return (p);
	while (i < len)
	{
		j = 0;
		while (*(p + i + j) == *(needle + j) && i < len)
		{
			 j++;
			if (j == n)
				return (p + i);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			t = (char *)s;
		}
		s++;
	}
	if (t == 0)
		return (NULL);
	return ((char *)t);
}

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

#endif
