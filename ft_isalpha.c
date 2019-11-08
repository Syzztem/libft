/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:03:41 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/08 09:54:55 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A' ? 1 : 0);
}

static int
	ft_islower(int c)
{
	return (c <= 'z' && c >= 'a' ? 1 : 0);
}

int
	ft_isalpha(int c)
{
	return (ft_islower(c) + ft_isupper(c));
}
