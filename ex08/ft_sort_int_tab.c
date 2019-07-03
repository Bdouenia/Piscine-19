void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tmp;

	a = 0;
	b = 0;
	tmp = 0;
	while ( a < (size -1))
	{
		b = 0;
		while ( b < (size -a -1))
		{
			if (tab[b] > tab[b + 1])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab [b + 1] = tmp;
			}
			b++;
		}
		a++;
	}
}
