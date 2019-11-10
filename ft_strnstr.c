/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:07:50 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/09 19:33:14 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	int i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && length > 0)
	{
		i = 0;
		while (*haystack != *needle && *haystack && --length > 0)
			haystack++;
		if (!haystack[i])
			return (NULL);
		while (haystack[i] == needle[i] && needle[i] && length - i > 0)
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
