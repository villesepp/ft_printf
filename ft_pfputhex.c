/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:26:26 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/14 12:18:02 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_int_to_hex_string(unsigned int n, size_t *count, int upcase)
{
	char	buffer[50];
	int		i;
	int		error;

	error = 0;
	i = 0;
	while (n)
	{
		buffer[i] = "0123456789abcdef"[n % 16];
		if (upcase && (buffer[i] >= 'a' && buffer[i] <= 'f'))
			buffer[i] -= 32;
		i++;
		n = n / 16;
	}
	i--;
	while (i >= 0 && error != -1)
	{
		error = ft_pfputchar(buffer[i], count);
		i--;
	}
	return (error);
}

int	ft_pfputhex(unsigned int n, size_t *count, int upcase)
{
	int		error;

	error = 0;
	if (n == 0)
	{
		error = ft_pfputchar('0', count);
		return (error);
	}
	error = ft_int_to_hex_string(n, count, upcase);
	return (error);
}
