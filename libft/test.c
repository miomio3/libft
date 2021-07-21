
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
