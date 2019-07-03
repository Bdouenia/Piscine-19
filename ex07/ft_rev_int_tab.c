void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int a;
	int b;

	b = size;
	a = 0;
	tmp = 0;
	while (a < size / 2)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}
}
