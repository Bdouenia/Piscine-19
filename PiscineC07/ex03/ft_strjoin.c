/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:17:44 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/18 14:59:03 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int b;

	b = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	a = 0;
	if (size == 0)
		return (str);
	while (i++ < size)
		a += ft_strlen(strs[i]);
	a += (ft_strlen(sep) * (size - 2));
	if (!(str = (char *)malloc(sizeof(a + 2))))
		return (0);
	i = 0;
	while (i++ < size)
	{
		str = ft_strcat(str, *strs);
		if (i < size)
			str = ft_strcat(str, sep);
		strs++;
	}
	a = ft_strlen(str);
	str[a] = '\0';
	return (str);
}
