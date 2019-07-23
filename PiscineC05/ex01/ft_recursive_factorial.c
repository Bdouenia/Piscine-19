/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:14:14 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/11 15:39:20 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int nbr;

	nbr = nb;
	if (nbr < 0)
		return (0);
	if ((nbr == 1) || (nbr == 0))
		return (1);
	return (nbr * ft_recursive_factorial(nbr - 1));
}
