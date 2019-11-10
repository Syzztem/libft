/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:20:46 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/10 15:37:52 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst, void (*free_fct)(void *))
{
	t_list	*elem;

	elem = lst;
	while (elem)
	{
		free_fct(lst->content);
		elem = lst->next;
		free(lst);
		lst = elem;
	}
}
