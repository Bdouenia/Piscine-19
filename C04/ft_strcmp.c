/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:08:27 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:39:22 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int a;

	a = 0;
	while ((s1[a] == s2[a]) && (s1[a]) && (s2[a]))
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
