/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidorik <mmidorik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:44:43 by mmidorik          #+#    #+#             */
/*   Updated: 2021/07/17 14:37:06 by mmidorik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *buf, int ch, size_t n);
void			*ft_calloc(size_t n, size_t size);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *buf, int ch, size_t n);
int				ft_memcmp(const void *buf1, const void *buf2, size_t n);
void			*ft_memcpy(void *buf1, const void *buf2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strnstr(const char *hay, const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(int n);
void			*ft_memmove(void *buf1, const void *buf2, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_put_fd(int keta, int n, int sign, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_putnbr_fd(int n, int fd);

#endif
