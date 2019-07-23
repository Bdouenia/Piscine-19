/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 21:37:57 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/09 14:39:14 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen_base(char *str)
{
	int a;
	int b;
	int c;

	c = 0;
	b = 1;
	a = 0;
	while (str[a])
		a++;
	while (str[c])
	{
		if (!((str[c] >= '0' && str[c] <= '9') || (str[c] >= 'a'
						&& str[c] <= 'z') || (str[c] >= 'A' && str[c] <= 'Z')))
			return (0);
		while (b <= a - 1)
		{
			if (str[c] == str[b])
				return (0);
			b++;
		}
		c++;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int a;

	a = ft_strlen_base(base);
	if (a != 0 || a != 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr++;
			nbr = -nbr;
			if (nbr == 2147483647)
			{
				ft_putchar('2');
				nbr = 147483647;
			}
			nbr++;
		}
		if (nbr >= a)
			ft_putnbr_base(nbr / a, base);
		ft_putchar(base[nbr % a]);
	}
}
