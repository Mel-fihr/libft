/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 06:42:59 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 09:13:47 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = ft_lstnew(NULL);
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&new_list, tmp);
		lst = lst->next;
	}
	return (new_list);
}
