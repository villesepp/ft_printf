/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/10 12:32:33 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h> //delte

static void	ft_int_to_hex_string(int n, int sign, size_t *count, int upcase)
{
	char	buffer[50];
	int		i;

	i = 0;
	while (n)
	{
		buffer[i] = "0123456789abcdef"[n % 16];
		if (upcase && (buffer[i] >= 'a' && buffer[i] <= 'f'))
			buffer[i] -= 32;
		i++;
		n = n/16;
	}
	if (sign)
	{
		buffer[i] = '-';
	}
	else
		i--;
	while(i >= 0)
	{
		ft_pfputchar(buffer[i], count);
		i--;
	}
}
	

void	ft_pfputhex(int n, size_t *count, int upcase)
{
	int		sign;

	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	else
		sign = 0;
	ft_int_to_hex_string(n, sign, count, upcase);
	(*count)++;
}
