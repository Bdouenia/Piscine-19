/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:52:35 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/08 17:35:03 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned n)
{
	unsigned int ret;
	unsigned int i;

	i = ft_strlen(dest);
	ret = i + ft_strlen(src);
	if (i >= n)
		return (ret - i + n);
	--n;
	while (*src && i != n)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (ret);
}
