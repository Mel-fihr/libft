/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:44:29 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/01 05:29:07 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s11;

	if (!s1 || !s2)
		return (NULL);
	s11 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s11)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s11[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s11[i + j] = s2[j];
		j++;
	}
	s11[i + j] = '\0';
	return (s11);
}
