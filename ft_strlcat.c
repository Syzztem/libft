/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:57:41 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 14:24:14 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t slen;
	size_t dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		return (size + slen);
	if (slen + dlen < size)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, size - 1);
		dst[dlen + size - 1] = 0;
	}
	return (dlen + slen);
}
