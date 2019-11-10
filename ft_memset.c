/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:29:50 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/09 19:05:38 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;

	if (len == 0)
		return (b);
	a = b;
	while (len--)
	{
		*a = (unsigned char)c;
		a++;
	}
	return (b);
}
