
int		ft_is_prime(int nb)
{
	int count;

	count = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (!(nb % 2))
		return (0);
	while (count < (nb / 2))
	{
		if ((nb % count) == 0)
			return (0);
		count++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int current;

	if (nb <= 2)
		return (2);
	current = nb;
	if ((current % 2) == 0)
		current++;
	while (!ft_is_prime(current))
	{
		current += 2;
	}
	return (current);
}
