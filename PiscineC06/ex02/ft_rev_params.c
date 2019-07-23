/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:01:41 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/13 12:01:49 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

int		main(int ac, char **av)
{
	int a;

	a = ac - 1;
	while (a > 0)
	{
		ft_putstr(av[a]);
		a--;
		write(1, "\n", 1);
	}
}
