
int		ft_iterative_power(int nb, int power)
{
	int i;
	int total;

	if (power < 0)
		return (0);
	i = 0;
	total = 1;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
