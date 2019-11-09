/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:57:55 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/08 13:10:18 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *elem;

	if (!*alst)
	{
		*alst = ft_lstnew(new);
		return ;
	}
	elem = *alst;
	while (elem->next)
		elem = elem->next;
	elem->next = ft_lstnew(new);
}
