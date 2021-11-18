/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:23:39 by ochoumou          #+#    #+#             */
/*   Updated: 2021/11/16 14:24:43 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_node;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		old_node = *lst;
		*lst = old_node->next;
		free(old_node);
	}
	*lst = NULL;
}
