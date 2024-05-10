/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:41 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/10 17:08:45 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h> //delte

static void ft_pfpint_to_hex(uintptr_t n, size_t *count)
{
    char    buffer[50];
    int     i;

    i = 0;
    while (n)
    {
        buffer[i] = "0123456789abcdef"[n % 16];
        i++;
        n = n/16;
    }
	buffer[i] = 'x';
	buffer[++i] = '0';
    while(i >= 0)
    {
        ft_pfputchar(buffer[i], count);
        i--;
    }
}

void	ft_pfputptr(void *ptr, size_t *count)
{
	uintptr_t	pint;
	if (!ptr)
		return (ft_pfputstr("0x0", count));
	pint = (uintptr_t)ptr;
	ft_pfpint_to_hex(pint, count);
}
