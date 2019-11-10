/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:30:43 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/10 18:50:38 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list
	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	current = head;
	while (lst)
	{
		if (!(current = ft_lstnew(f(lst))))
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (head);
}
