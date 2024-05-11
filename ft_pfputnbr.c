/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:40:09 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/11 13:28:42 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pfputnbr(int n, size_t *count)
{
	int		error;

	error = 0;
	if (n == -2147483648 && error != -1)
	{
		error = ft_pfputstr("-2147483648", count);
		return (error);
	}
	if (n < 0 && error != -1)
	{
		n *= -1;
		error = ft_pfputchar('-', count);
	}
	if (n >= 10 && error != -1)
	{
		ft_pfputnbr(n / 10, count);
		error = ft_pfputchar(n % 10 + '0', count);
	}
	if (n < 10 && error != -1)
		error = ft_pfputchar(n + '0', count);
	return (error);
}
