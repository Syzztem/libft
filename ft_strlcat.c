/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:57:41 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/08 11:08:11 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s = src;
	size_t		i;
	size_t		dlen;

	d = dst;
	dlen = ft_strlen(dst);
	dlen = (dlen >= size ? size : dlen);
	i = size - dlen;
	d += dlen;
	if (!i)
		return (dlen + ft_strlen(src));
	while (*s)
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = 0;
	return (dlen + s - src);
}
