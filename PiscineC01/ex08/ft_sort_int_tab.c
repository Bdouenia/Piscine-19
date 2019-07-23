/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 18:24:10 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/04 15:17:35 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tmp;

	a = 0;
	b = 0;
	tmp = 0;
	while (a < (size - 1))
	{
		b = 0;
		while (b < (size - a - 1))
		{
			if (tab[b] > tab[b + 1])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = tmp;
			}
			b++;
		}
		a++;
	}
}
