/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 08:22:43 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 12:01:38 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	is_separate(char c, char const *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static size_t
	strslen(char const *str, char const *set)
{
	int i;

	i = 0;
	while (*str && is_separate(*str, set))
		str++;
	if (!*str)
		return (0);
	while (str[i])
		i++;
	i--;
	while (str[i] && is_separate(str[i], set))
		i--;
	i += 1;
	return (i);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	char	*out;
	int		i;
	size_t	len;

	a = (char *)s1;
	len = strslen(a, set);
	while (*a && is_separate(*a, set))
		a++;
	if (!(out = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len-- > 0)
	{
		out[i++] = *a;
		a++;
	}
	out[i] = 0;
	return (out);
}
