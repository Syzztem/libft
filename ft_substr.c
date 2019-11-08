/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 08:23:03 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 12:11:48 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *out;
	char *c;
	char *a;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(out = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	c = out;
	a = (char *)s + start;
	while (len-- && *a)
		*c++ = *a++;
	*c = 0;
	return (out);
}
