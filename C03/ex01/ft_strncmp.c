int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		if (s1[a] != s2[a])
			return (0);
	}
	if :q(((s1[a] == '\0') && (s2[a] != '\0'))
		|| ((s1[a] != '\0') && (s1[a] == '\0')))
		return (0);
	return (1);
}
