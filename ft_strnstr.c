/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:00:40 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/08 08:39:45 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*n;

	i = 0;
	j = 0;
	s = (char *)haystack;
	n = (char *)needle;
	if (needle[0] == 0)
		return (s);
	if (!len)
		return (NULL);
	while (haystack[i] && i < len)
	{
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&s[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
