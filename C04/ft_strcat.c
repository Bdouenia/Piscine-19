/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:26:50 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:39:06 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	len;

	len = ft_strlen(dest);
	while (*src)
	{
		dest[len] = *src++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
