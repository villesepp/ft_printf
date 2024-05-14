/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:25:57 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/13 13:26:00 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	insert_chars(char *res, long long int n, int sign, size_t count)
{
	int		remainder;
	size_t	i;

	i = 0;
	if (n < 0)
		n = -n;
	else
		sign = 0;
	while (count > i)
	{
		remainder = n % 10;
		n = n / 10;
		res[sign + count - i - 1] = remainder + '0';
		i++;
	}
}

static int	is_negative(long long int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static int	count_digits(long long int n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n != 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

char	*ft_pfitoa(long long int n, int is_unsigned)
{
	char	*res;
	int		sign;
	size_t	count;

	if (!is_unsigned)
		sign = is_negative(n);
	else
		sign = 0;
	count = count_digits(n);
	res = (char *) malloc((sign + count + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (sign)
		res[0] = '-';
	res[sign + count] = '\0';
	insert_chars(res, n, sign, count);
	return (res);
}
