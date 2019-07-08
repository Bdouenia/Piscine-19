int ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] && s2[a])
	{
		if (s1[a] != s2[a])
			return (0);
	}
	a++;
	if (((s1[a] == '\0') && (s2[a] != '\0'))
		|| ((s1[a] != '\0') && (s1[a] == '\0')))
		return (0);
	return (1);
}
