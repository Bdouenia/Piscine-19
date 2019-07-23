/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:31:10 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/10 15:39:29 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_all_low(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	ft_all_low(str);
	if ((str[a] >= 'a') && (str[a] <= 'z'))
		str[a] = str[a] - 32;
	while (str[a])
	{
		if ((str[a] <= '/')
			|| ((str[a] >= ':') && (str[a] <= '@'))
			|| ((str[a] >= '[') && (str[a] <= '`'))
			|| ((str[a] >= '{') && (str[a] <= '~'))
			if ((str[a + 1] >= 'a') && (str[a + 1] <= 'z'))
				str[a + 1] = str[a + 1] - 32;
		a++;
	}
	return (str);
}
