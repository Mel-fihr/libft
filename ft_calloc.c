/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:48:20 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 09:35:15 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (tmp);
	ft_bzero(tmp, count * size);
	return (tmp);
}
