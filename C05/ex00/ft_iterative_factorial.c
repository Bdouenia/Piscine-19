
int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0 || nb > 12)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
