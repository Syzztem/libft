/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:52:50 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/10 15:20:34 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void
	*free_tab(char **tab, int i)
{
	while (--i >= 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static int
	wordlen(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void
	copy_to(char *dest, char **src, char c)
{
	int i;

	i = 0;
	while (**src && **src != c)
	{
		dest[i] = **src;
		i++;
		(*src)++;
	}
	dest[i] = '\0';
}

static int
	count_words(const char *str, char c)
{
	int i;

	i = 0;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
		i++;
	}
	return (i);
}

char
	**ft_split(const char *str, char c)
{
	int		i;
	char	**out;

	i = 0;
	if (!(out = malloc(sizeof(char *) * (count_words(str, c) + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			if (!(out[i] = malloc(sizeof(char) * (wordlen(str, c) + 1))))
				return (free_tab(out, i));
			copy_to(out[i], (char **)&str, c);
			i++;
		}
	}
	if (!(out[i] = malloc(sizeof(char))))
		return (NULL);
	out[i] = NULL;
	return (out);
}
