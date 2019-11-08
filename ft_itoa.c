/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:59:18 by exam              #+#    #+#             */
/*   Updated: 2019/11/07 11:25:58 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char
	*get_as_str(int n, unsigned long i, char *str, int nbr)
{
	int j;

	j = 0;
	if (nbr < 0)
	{
		str[j] = '-';
		j++;
	}
	while (i >= 1)
	{
		str[j] = n / i + '0';
		n %= i;
		i /= 10;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char
	*ft_itoa(int nbr)
{
	unsigned long	i;
	int				sz;
	unsigned int	n;
	char			*out;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (nbr == 0)
		return (ft_strdup("0"));
	i = 1;
	n = nbr > 0 ? nbr : -nbr;
	sz = 0;
	while (i <= n)
	{
		i *= 10;
		sz++;
	}
	i /= 10;
	if (!(out = malloc(sizeof(char) * (sz + (nbr < 0 ? 2 : 1)))))
		return (NULL);
	return (get_as_str(n, i, out, nbr));
}
