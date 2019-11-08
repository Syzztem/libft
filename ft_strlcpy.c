/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 18:29:21 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 09:49:26 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t slen;

	slen = ft_strlen(src);
	if (slen + 1 < size)
		ft_memcpy(dest, src, slen + 1);
	else if (size)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (slen);
}
