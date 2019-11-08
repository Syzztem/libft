/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 08:05:17 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/07 08:09:30 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	a;
	unsigned long	i;

	if (nb == 0)
		ft_putchar_fd('0', fd);
	i = 1;
	a = nb > 0 ? nb : -nb;
	if (nb < 0)
		ft_putchar_fd('-', fd);
	while (i <= a)
		i *= 10;
	i /= 10;
	while (i >= 1)
	{
		ft_putchar_fd(a / i + '0', fd);
		a %= i;
		i /= 10;
	}
}
