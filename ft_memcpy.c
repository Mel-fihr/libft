/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:05:50 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 09:16:56 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (!src && !dst)
		return (dst);
	if (!ft_memcmp(pdst, src, n))
		return (dst);
	while (n > 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
		n--;
	}
	return (dst);
}
