/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:24:15 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/05 17:36:25 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char *a;

	a = (char *)s;
	while (*a)
	{
		if (*a == c)
			return (a);
		a++;
	}
	if (*a == c)
		return (a);
	return (NULL);
}
