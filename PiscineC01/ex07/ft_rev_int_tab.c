/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 18:23:47 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/04 18:18:02 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int a;
	int b;

	b = size - 1;
	a = 0;
	tmp = 0;
	while (a < size / 2)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}
}
