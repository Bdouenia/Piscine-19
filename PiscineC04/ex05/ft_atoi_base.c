/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 22:01:00 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/09 13:58:36 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		if (str[c] == ' ' || str[c] == '+' || str[c] == '-')
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

int		ft_trans(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	if (base[i] == '\0')
		i = -1;
	return (i);
}

int		ft_done(int c, char *base, int a, char *str)
{
	int nb;
	int d;

	d = 0;
	nb = 0;
	while ((str[a] >= '0' && str[a] <= '9') || (str[a] >= 'a'
				&& str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
	{
		d = ft_trans(base, str[a]);
		if (d < 0)
			break ;
		nb = nb * c + d;
		a++;
	}
	return (nb);
}

int		ft_atoi_base(char *str, char *base)
{
	int a;
	int b;
	int c;
	int nb;

	a = 0;
	b = 0;
	c = ft_strlen_base(base);
	nb = 0;
	if (c != 0)
	{
		while ((str[a] == ' ') || (str[a] >= 9 && str[a] <= 13))
			a++;
		while (str[a] == '-' || str[a] == '+')
		{
			if (str[a] == '-')
				b++;
			a++;
		}
		if (!((str[a] >= '0' && str[a] <= '9') || (str[a] >= 'a'
						&& str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z')))
			return (0);
		nb = ft_done(c, base, a, str);
	}
	return (b % 2 == 0 ? nb : -nb);
}
