/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:57:02 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/09 20:26:02 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char *s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}
