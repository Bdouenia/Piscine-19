/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:14:50 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/10 15:14:53 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
