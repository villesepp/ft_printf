/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:40:09 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/11 13:09:59 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pfputunbr(unsigned int n, size_t *count)
{
	int		error;

	error = 0;
	if (n >= 10 && error != -1)
	{
		ft_pfputnbr(n / 10, count);
		error = ft_pfputchar(n % 10 + '0', count);
	}
	if (n < 10 && error != -1)
		error = ft_pfputchar(n + '0', count);
	return (error);
}
