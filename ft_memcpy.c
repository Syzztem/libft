/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:57:02 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/06 17:21:37 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char
	*ft_strrcpy(char *dest, char *src, int r)
{
	int i;

	i = -1;
	while (++i < r)
		dest[i] = src[i];
	return (dest);
}

void
	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (ft_strrcpy((char *)dst, (char *)src, n));
}
