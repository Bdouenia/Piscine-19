/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:21:48 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/09 19:13:49 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_atoi(char *str)
{
	int a;
	int b;
	int nb;
	int c;

	a = 0;
	b = 0;
	nb = 0;
	c = 0;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\r'
			|| str[a] == '\v' || str[a] == '\f' || str[a] == ' ')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b++;
		a++;
	}
	if (str[a + 1] < '0' || str[a + 1] > '9')
		return (0);
	while (str[a] >= '0' && str[a] <= '9')
	{
		nb = nb * 10 - str[a] - 48;
		a++;
		if (c == 0)
		{
			nb = (b % 2 == 0 ? nb : -nb);
			c++;
		}
	}
	return (nb);
}