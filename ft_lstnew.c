/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <lothieve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:48:25 by lothieve          #+#    #+#             */
/*   Updated: 2019/11/10 15:33:10 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = NULL;
	if (!(head = malloc(sizeof(t_list))))
		return (NULL);
	*head = (t_list) { .next = NULL, .content = content };
	return (head);
}
