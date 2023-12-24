/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:08:48 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 09:13:12 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	uc;

	str = (char *) s;
	uc = (char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
