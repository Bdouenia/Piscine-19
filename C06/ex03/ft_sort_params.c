void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((char)s1[i] - (char)s2[i]);
}
char **ft_sort_params(char **tab, int i)
{
	int a;
	int b;
	int c;
	char *str;

	str = "ok";
	c = 1;
	a = 0;
	b = 0;
	while (tab[a])
	{
		b = 0;
		c = 1;
		while (b < i)
		{
			if (ft_strcmp(tab[a], tab[b]) > 0)
				{
					str = tab[a];
					tab[a] = tab[b];
					tab[b] = str;
				}
			b++;
		}
		a++;
	}
	return (tab);
}

int		main(int ac, char **av)
{
	int i;
	char **rev;

	i = 0;
	rev = ft_sort_params(av, ac);
	while (i < ac)
	{
		ft_putstr(rev[i]);
		i++;
	}
}
