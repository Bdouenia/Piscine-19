#include <unistd.h>

void ft_putstr(char *str)
{
	int a;
	a = 0;
	while (str[a])
	{
		write (1, &str[a], 1);
		a++;
	}
}

int		main(int ac , char **av)
{
	ft_putstr(av[0]);
	return (0);
}
