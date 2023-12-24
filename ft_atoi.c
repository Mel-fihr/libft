/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:17:20 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/01 06:45:20 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_overflow(long *res, char str)
{
	if (*res > 922337203685477580 || (*res == 922337203685477580
			&& str - 48 > 7))
	{
		return (0);
	}
	*res *= 10;
	*res += str - 48;
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		if (!handle_overflow(&res, str[i]))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		i++;
	}
	return (res *= sign, res);
}
