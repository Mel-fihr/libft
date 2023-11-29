/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:56:29 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/11/03 14:53:20 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	res;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	res = s_len + d_len;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	else if (d_len < dstsize - 1 && dstsize > 0)
	{
		dst += d_len;
		dstsize -= d_len;
		if (s_len >= dstsize)
			s_len = dstsize - 1;
		ft_memcpy(dst, src, s_len);
		dst[s_len] = '\0';
	}
	return (res);
}
