int		ft_count_nb_w(char *str, char set)
{
	int i;
	int nb_w;

	nb_w = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] == set)
			nb_w++;
		i++;
	}
	return (nb_w)
}

int		ft_is_splitable

void	ft_fill_split(char **split, char *str, char charset)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i])
	{
		if (ft_is_splitable(str, charset) == 1)
			i++;
		
		
	}
}

char **ft_split_nline(char *str, char charset)
{
	char **split;
	int nb_w;

	nb_w = ft_count_nb_w(str, charset);
	if (!(split = (char *)malloc(sizeof(char *) * (nb_w + 1))))
		return (NULL);
	ft_fill_split(split, str, charset);
	return (split);
}
