/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:18:16 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/20 22:51:57 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % i != 0 && i < nb)
	{
		i += 2;
		if (i == nb)
			return (1);
	}
	return (0);
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

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	printf("%d\n", ft_find_next_prime(atoi(av[1])));
	return (0);
}
