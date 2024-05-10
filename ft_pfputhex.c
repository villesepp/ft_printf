/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/10 16:59:31 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h> //delte

static void	ft_int_to_hex_string(unsigned int n, size_t *count, int upcase)
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
	i--;
	while(i >= 0)
	{
		ft_pfputchar(buffer[i], count);
		i--;
	}
}

void	ft_pfputhex(unsigned int n, size_t *count, int upcase)
{
	if (n == 0)
		ft_pfputchar('0', count);
	ft_int_to_hex_string(n, count, upcase);
}
