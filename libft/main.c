
#include "libft.h"

int main(void)
{
	char s[] = "    split       this for   me  !       ";
	char **p = ft_split(s, ' ');
	int i;

	i = 0;
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	return (0);
}
