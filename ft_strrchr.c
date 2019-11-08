/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:43:58 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/05 17:46:25 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *a;

	ptr = NULL;
	a = (char *)s;
	while (*a)
	{
		if (*a == c)
			ptr = a;
		a++;
	}
	if (*a == c)
		ptr = a;
	return (ptr);
}
