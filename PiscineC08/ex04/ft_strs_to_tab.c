/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:28:27 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/18 16:37:35 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char				*ft_strdup(char *src)
{
	char	*str;
	int		a;

	a = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(char) * (a + 1))))
		return (0);
	a = 0;
	while (src[a])
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	if (!(tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
