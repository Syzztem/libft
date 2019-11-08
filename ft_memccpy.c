/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:57:02 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/06 19:01:34 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char
	*ft_strccpy(char *dest, char *src, int r, int c)
{
	int i;

	i = -1;
	while (++i < r)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (&dest[i + 1]);
	}
	return (NULL);
}

void
	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	return (ft_strccpy((char *)dst, (char *)src, n, c));
}
