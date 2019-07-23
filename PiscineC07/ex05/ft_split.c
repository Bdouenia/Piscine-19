/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:09:39 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/16 13:52:25 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_look_cut(char *str, char *charset)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while(str[a])
	{
		b = 0;
		while (charset[b])
		{
			if (str[a] == charset[b])
			{
				c++;
				break ;
			}
			b++;
		}
		a++;
	}
	return (c);
}

char **ft_split(char *str, char *charset)
{
	int nb_split;
	char **result

	nb_split = ft_look_cut(str,charset)
	if(!(*result = (char*)malloc(sizefof(char) * a)))
		return (0);
	
}
