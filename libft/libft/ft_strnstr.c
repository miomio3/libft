#include        <stdio.h>
#include        <string.h>

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

int main(void)
{
        char    s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
        char    s2[] = "defgh";                 /* 一致する場合 */
        char    s3[] = "xyz";                   /* 一致しない場合 */
        char    s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
        char    s5[] = "";                      /* \0 */
        char    *sp;
        
        sp = ft_strnstr(s1,s2,20);
        printf("一致する場合 : %s\n",sp);
        sp = ft_strnstr(s1,s3, 20);
        printf("一致しない場合 : %s\n",sp);
        sp = ft_strnstr(s1,s4, 20);
        printf("検索対象文字列より長い場合 : %s\n",sp);
        sp = ft_strnstr(s1,s5, 1);
        printf("\\0 : %s\n",sp);
        
        return 0;
}
