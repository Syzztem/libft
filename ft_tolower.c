/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:00:11 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/08 09:56:18 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A' ? 1 : 0);
}

int	ft_tolower(int c)
{
	return (ft_isupper(c) ? c + 32 : c);
}
