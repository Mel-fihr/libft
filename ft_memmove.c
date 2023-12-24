/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:34:35 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 09:12:51 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	size_t	n;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	n = 0;
	if (pdst > psrc)
	{
		n = len;
		while (n-- > 0)
			pdst[n] = psrc[n];
	}
	else
	{
		while (n < len)
		{
			pdst[n] = psrc[n];
			n++;
		}
	}
	return (dst);
}
