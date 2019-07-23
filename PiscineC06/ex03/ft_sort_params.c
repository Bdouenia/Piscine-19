/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:54:58 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/13 11:58:43 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**swap(char **av, int i)
{
	char *tmp;

	tmp = av[i];
	av[i] = av[i + 1];
	av[i + 1] = tmp;
	return (av);
}

char	**pre_swap(char **av, int i, int n, int ac)
{
	while (i + 1 < ac)
	{
		if (av[i][n] == '\0')
		{
			i++;
			n = 0;
		}
		else if (av[i][n] == av[i + 1][n])
			n++;
		else if (av[i][n] < av[i + 1][n])
		{
			i++;
			n = 0;
		}
		else
		{
			av = swap(av, i);
			i = 1;
			n = 0;
		}
	}
	return (av);
}

int		main(int ac, char **av)
{
	int		i;
	int		n;
	char	**res;

	i = 1;
	n = 0;
	res = pre_swap(av, i, n, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
