/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:05:16 by mel-fihr          #+#    #+#             */
/*   Updated: 2023/12/06 11:53:02 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnbr(long *n)
{
	int	count;
	int	nb;

	count = 0;
	nb = *n;
	if (*n == -2147483648)
	{
		*n = 2147483648;
		return (11);
	}
	if (*n <= 0)
	{
		count++;
		*n *= -1;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	long	new_n;
	char	*res;

	new_n = n;
	count = countnbr(&new_n);
	res = (char *)malloc(count + 1);
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (count)
	{
		res[--count] = new_n % 10 + 48;
		new_n /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
