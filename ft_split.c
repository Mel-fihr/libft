/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:42:18 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/11/12 15:02:06 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
		{
			i = 0;
		}
		s++;
	}
	return (count);
}

static char	*std(const char *s, int len)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	ffrt(char **split, int j)
{
	while (j--)
		free(split[j]);
	free(split);
}

static char	**norminite(char **result, const char *s, char c, int j)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			result[j++] = std(s + start, len);
			if (!result[j - 1])
			{
				ffrt(result, j);
				return (NULL);
			}
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	start = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (norminite(result, s, c, j));
}
