/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:19:28 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/07 10:23:56 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int both;

	b = 0;
	a = 0;
	both = 0;
	while (dest[b])
		b++;
	while (src[a])
		a++;
	both = a + b;
	a = 0;
	if (a == size)
		return (both);
	while (src[a] && a < size)
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (both);
}
