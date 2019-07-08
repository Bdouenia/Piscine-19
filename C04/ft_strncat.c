/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:33:54 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:52:39 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(dest);
	while (n-- && *src)
	{
		dest[len] = *src++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
