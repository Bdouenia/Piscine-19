/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:57:53 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 23:50:19 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	size_t		len;

	i = 0;
	len = ft_strlen(needle);
	if (!len)
		return ((char*)haystack);
	while (*haystack)
	{
		if (!ft_strncmp(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
