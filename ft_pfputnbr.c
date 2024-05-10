/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:40:09 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/08 14:52:38 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pfputnbr(int n, size_t *count)
{
	if (n == -2147483648)
	{
		ft_pfputstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_pfputchar('-', count);
	}
	if (n >= 10)
	{
		ft_pfputnbr(n / 10, count);
		ft_pfputchar(n % 10 + '0', count);
	}
	if (n < 10)
		ft_pfputchar(n + '0', count);
}
