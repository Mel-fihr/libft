/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:42:53 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/01 06:20:15 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
