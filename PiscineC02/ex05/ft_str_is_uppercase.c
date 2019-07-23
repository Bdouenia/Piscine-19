/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:57:51 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/05 11:13:57 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || str[a] > 'Z')
			return (0);
		a++;
	}
	return (1);
}