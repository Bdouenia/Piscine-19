/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:34:17 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/08 17:18:16 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] == s2[a]) && (s1[a] != '\0')
			&& (s2[a] != '\0') && (a < n - 1))
		a++;
	return ((char)s1[a] - (char)s2[a]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (to_find[b])
		b++;
	if (!b)
		return (str);
	while (*str)
	{
		if (!ft_strncmp(str, to_find, b))
			return (str);
		str++;
	}
	return (0);
}
