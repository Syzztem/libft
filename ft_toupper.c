/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:00:02 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/08 09:56:00 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_islower(int c)
{
	return (c <= 'z' && c >= 'a' ? 1 : 0);
}

int	ft_toupper(int c)
{
	return (ft_islower(c) ? c - 32 : c);
}
