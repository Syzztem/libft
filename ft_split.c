/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:52:50 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 08:36:11 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	is_separate(char c, char del)
{
	if (c == del)
		return (1);
	return (0);
}

static int
	wordlen(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && !is_separate(str[i], c))
		i++;
	return (i);
}

static void
	copy_to(char *dest, char **src, char c)
{
	int i;

	i = 0;
	while (**src && !is_separate(**src, c))
	{
		dest[i] = **src;
		i++;
		(*src)++;
	}
	dest[i] = '\0';
}

static int
	count_words(char *str, char c)
{
	int i;

	i = 0;
	while (*str && is_separate(*str, c))
		str++;
	while (*str)
	{
		while (*str && !is_separate(*str, c))
			str++;
		while (*str && is_separate(*str, c))
			str++;
		i++;
	}
	return (i);
}

char
	**ft_split(char *str, char c)
{
	int		i;
	char	**out;

	i = 0;
	if (!(out = malloc(sizeof(char *) * (count_words(str, c) + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && is_separate(*str, c))
			str++;
		if (*str)
		{
			if (!(out[i] = malloc(sizeof(char) * (wordlen(str, c) + 1))))
				return (NULL);
			copy_to(out[i], &str, c);
			i++;
		}
	}
	if (!(out[i] = malloc(sizeof(char))))
		return (NULL);
	out[i] = NULL;
	return (out);
}
