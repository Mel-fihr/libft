/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:52:59 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/11/07 20:52:35 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	slen(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		j;
	char	*s11;

	if (!s1 || !set)
		return (NULL);
	len = 0;
	i = 0;
	j = ft_strlen(s1) - 1;
	while (slen(set, s1[len]))
		len++;
	if (len > j)
		return (ft_strdup("\0"));
	while (slen(set, s1[j]))
		j--;
	s11 = malloc(j - len + 2);
	if (!s11)
		return (NULL);
	while (len <= j)
		s11[i++] = s1[len++];
	s11[i] = '\0';
	return (s11);
}
