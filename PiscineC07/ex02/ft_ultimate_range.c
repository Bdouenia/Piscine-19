/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:18:13 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/16 16:27:03 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_ultimate_range(int **range, int min, int max)
{
	int			*tab;
	long long	i;
	long long	size;

	size = max - min;
	if (size > 2147483647)
		return (-1);
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
