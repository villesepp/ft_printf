/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:23:42 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/10 12:31:15 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h // not using yet
#include "printf.h"
#include <stdio.h> // delete

static void	conversion (va_list args, const char *str, size_t *count)
{
	if (*str == 'c')
		ft_pfputchar(va_arg(args, int), count);
	else if (*str == 's')
		ft_pfputstr(va_arg(args, char *), count);
	else if (*str == 'p')
		ft_pfputptr(va_arg(args, void *), count);
	else if (*str == 'd' || *str == 'i')
		ft_pfputnbr(va_arg(args, int), count);
	else if (*str == 'u')
	{
		ft_pfputchar('-', count);
		va_arg(args, void *);
	}
	else if (*str == 'x')
		ft_pfputhex(va_arg(args, int), count, 0);
	else if (*str == 'X')
		ft_pfputhex(va_arg(args, int), count, 1);
	else if (*str == '%')
		ft_pfputchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	size_t	count;

	va_list	args; // hold the arg information
	count = 0;
	if (!str)
		return (0);
	va_start(args, str); // enables access to variadic function arguments
	while (*str)
	{
		if(*str == '%')
		{
			str++;
			conversion(args, str, &count);
		}
		else
			ft_pfputchar(*str, &count);
		str++;
	}
	va_end(args); // free allocated memoery
	//printf("return count %zu\n", count);
	return (count - 1); // printf returns the number of characters printed (no null term). On error print a negative value.
}
