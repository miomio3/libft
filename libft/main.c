#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	free_p(char **p)
{
	int	i;

	i = 0;
	while (p[++i])
	{
		free(p[i]);
		p[i] = NULL;
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)//substr
{
	char	*p;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (*(s + start + i))
		i++;
	if (*s == '\0' || start >= (unsigned int)strlen((char *)s))
	{
		return (strdup(""));
	}
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i))
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

char	*ft_strnochr(const char *s, char c, int f)//stringを区切るために使用。フラグ（f）によって前の部分を探索するか終端を探索するのかを決めている
{
	if (f == 0)//stringの始めの部分を探す
	{
		while (*s)
		{
			if (*s == (char)c)
				s++;
			else
				break ;
		}
		if (*s == (char)c || *s == '\0')
			return (NULL);
		return ((char *)s);
	}
	else//f=1の場合。stringの終端を探索。
	{
		while (*s)
		{
			if (*s != (char)c)
				s++;
			else
				break ;
		}
		return ((char *)s - 1);
	}
}

char	*ft_substr2(char const *front, char const *back)//ボインタからポインタまでのストリングを作る
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)front;
	while (tmp[i])
	{
		if (&tmp[i] == back)
			break ;
		else
			i++;
	}
	return (ft_substr(front, 0, i + 1));
}

char	**ft_split2(char	const *s, char c, int i)
{
	char	*front;
	char	*back;
	char	**p;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0' || ft_strnochr(s, c, 0) == NULL)
	{
		p = (char **)malloc(sizeof(char *) * (i + 1));
		if (p == NULL)
			return (NULL);
		p[i] = NULL;
		return (p);
	}
	else
	{
		front = ft_strnochr(s, c, 0);//ストリングの最初を決定。
		back = ft_strnochr(front + 1, c, 1);//ストリングの終端を決定。
		p = ft_split2(back + 1, c, i + 1);//再帰で後ろまで見て、後ろから（つまりp[i]〜p[0]の順番に）を埋めていく。
		p [i] =ft_substr2(front, back);
		if (p[i] == NULL)
			free_p(p + i);
		return (p);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	return (ft_split2(s, c, 0));
}


int main(void)
{
	char **a;
	int i;

	i = 0;
		a = ft_split("        split       this for   me  !       ", ' ');
	while (a[i] != NULL)
	{
		printf("%s\n", a[i++]);
		free(a[i - 1]);
	}
	printf("%s\n", a[i]);
	free(a[i]);
	free(a);
	printf("\n");
		i = 0;
	a = ft_split("         ", ' ');
	while (a[i] != NULL)
	{
		printf("%s\n", a[i++]);
		free(a[i - 1]);
	}
	printf("%s\n", a[i]);
	free(a[i]);
	free(a);
	return (0);
}
